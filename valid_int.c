#include "libft.h"

void	valid_int(long res)
{
	if (res < INT_MIN || res > INT_MAX)
		return(1);
}