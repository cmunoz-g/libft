//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	countwords(char const *s, char c)
{
	size_t	i;
	size_t	sw;
	size_t	result;

	i = 0;
	sw = 1;
	result = 0;
	while (s[i])
	{
		if (s[i] == c)
			sw = 1;
		else if (s[i] != c && sw == 1)
		{
			result++;
			sw = 0;
		}
		i++;
	}
	return (result);
}

int	auxmem(char **tab, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	let;

	i = 0;
	j = 0;
	k = 0;
	let = 0;
	while (tab[i])
	{
		while (s[j] == c)
			j++;
		while (s[j] != c)
		{
			j++;
			let++;
		}
		tab[i] = (char *)malloc(let);
		if (!tab[i])
		{
			while (k < i)
				free(tab[k++]);
			return (-1);		
		}
		let = 0;
		i++;
	}
	return (0);
}

void	auxfill(char **tab, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (tab[i])
	{
		while (s[j] == c)
			j++;
		while (s[j] != c)
			tab[i][k++] = s[j++];
		tab[i][k] = '\0';
		i++;
		k = 0;
	}
	tab[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	words;

	if (!s)
		return (NULL);
	else if (!*s)
	{
		tab = (char **)malloc(sizeof(char*));
		tab[0] = NULL;
		return (tab);
	}
	words = countwords(s, c);
	tab = (char **)malloc((words + 1) * sizeof(char *));
	if (auxmem(tab, s, c) == -1)
	{
		free(tab);
		return (NULL);
	}
	auxfill(tab, s, c);
	return (tab);
}

int main() {
    char const *s = "hola-que-tal-estas";
    char c = '-';
    char **res = ft_split(s, c);
    size_t i = 0;
	
    if (res) {
        while (res[i]) {
            printf("%s\n", res[i]);
            free(res[i]); 
            i++;
        }
        free(res); 
    }
    return 0;
}