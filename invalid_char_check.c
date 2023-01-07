#include "libft.h"

void	invalid_char_check(char *str)
{
	int	i;

	if (ft_strlen(str) > 11)
		return ;
	i = 0;
	if (str[0] == '\0')
		return ;
	if (str[i] == '-')
		i++;
	if (str[0] == '-' && str[1] == '\0')
		return ;
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return ;
		i++;
	}
}