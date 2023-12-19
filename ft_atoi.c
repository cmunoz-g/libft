#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	neg;
	int	res;

	neg = 1;
	res = 0;
	while (*nptr == 32)
		nptr++;
	if (*nptr == 43 || *nptr == 45)
	{
		if (*nptr == '-')
			neg = -1;
		nptr++;
	}
	while (*nptr >= 48 && *nptr <= 57)
	{
		res = (res * 10) + (*nptr - '0');
		nptr++;
	}
	return (res * neg);
}
