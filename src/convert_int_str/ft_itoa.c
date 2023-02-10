/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:02:03 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:24:41 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/libft.h"

//counting the size of the input
static size_t	ft_size_count(int n)
{
	int	size;

	if (n > 0)
		size = 0;
	else
		size = 1;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

/*
converts the integer to the equivalent string (opposite of atoi)
the string should be big enough to hold the result so it's allocated with 
malloc for the amount of chars and +1for the terminating null
if the size is 0 but it isn't the terminating null yet, then it's a - 
number
*/
char	*ft_itoa(int n)
{
	char		*str;
	long		nbr;
	size_t		size;

	nbr = n;
	size = ft_size_count(n);
	if (nbr < 0)
		nbr *= -1;
	str = ((char *)malloc(size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
		size--;
	while (nbr > 0)
	{
		str[size] = nbr % 10 + '0';
		nbr /= 10;
		size--;
	}
	if (size == 0 && str[1] == '\0')
		str[0] = '0';
	else if (size == 0 && str[1] != '\0')
		str[0] = '-';
	return (str);
}
