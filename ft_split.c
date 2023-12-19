#include "libft.h"

size_t	countwords(char const *s, char c)
{
	size_t	i;
	size_t	state;
	size_t	result;

	i = 0;
	state = 1;
	result = 0;
	while (s[i])
	{
		if (s[i] == c)
			state = 1;
		else if (s[i] != c && state == 1)
		{
			result++;
			state = 0;
		}
		i++;
	}
	return (result);
}

size_t	auxstrmem(char const *s, char c, size_t *j)
{
	size_t	len;

	len = 0;
	while (s[*j] != c && s[*j])
	{
		(*j)++;
		len++;
	}
	return (len);
}

int	strmem(char **tab, char const *s, char c, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < words)
	{
		while (s[j] == c)
			j++;
		tab[i] = (char *)malloc(auxstrmem(s, c, &j) + 1);
		if (!tab[i])
		{
			while (k < i)
				free(tab[k++]);
			return (-1);		
		}
		i++;
	}
	tab[i] = NULL;
	return (0);
}

void	strfill(char **tab, char const *s, char c)
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
		while (s[j] != c && s[j])
			tab[i][k++] = s[j++];
		tab[i][k] = '\0';
		i++;
		k = 0;
	}
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
	if (tab == NULL)
		return (NULL);
	if (strmem(tab, s, c, words) == -1)
	{
		free(tab);
		return (NULL);
	}
	strfill(tab, s, c);
	return (tab);
}