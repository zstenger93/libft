#include "libft.h"

void	invalid_char_check(char *str)
{
	int	i;

	if (ft_strlen(str) > 11)
		return(1);
	i = 0;
	if (str[0] == '\0')
		return(1);
	if (str[i] == '-')
		i++;
	if (str[0] == '-' && str[1] == '\0')
		return(1);
	while (str[i] != '\0')
	{
		if (ft_is_digit(str[i]) == false)
			return(1);
		i++;
	}
}