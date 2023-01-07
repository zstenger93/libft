#include "libft.h"

long	ft_atol(char *str)
{
	int		i;
	long	sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	if (str[0] == '\0')
		return(1);
	if (str[i] == '-')
	{
		sign *= (-1);
		i++;
	}
	while (str[i] != '\0')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	res = res * sign;
	ft_check_invalid_chars(str);
	ft_check_num_range(res);
	return (res);
}