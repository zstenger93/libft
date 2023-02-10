/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:45:48 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:24:15 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
converts the string to integer
checking for non printable characters and skipping them if they are present
if + sign found skip it as well
if - sign found then the value of sign will be -1. In case the number of - sign
is not odd the output value will be positive.
if there are no more signs then we are looking for numbers and we stop when
the next one isn't number anymore and return the result multiplied by the sign
we recieved before.
*/
int	ft_atoi(const char *str)
{
	int	z;
	int	res;
	int	sign;

	z = 0;
	res = 0;
	sign = 1;
	while (str[z] == ' ' || str[z] == '\f' || str[z] == '\n' || str[z] == '\r'
		|| str[z] == '\t' || str[z] == '\v')
			z++;
	if (str[z] == '-')
	{
		sign *= (-1);
		z++;
	}
	else if (str[z] == '+')
		z++;
	while (str[z] >= '0' && str[z] <= '9')
	{
		res = res * 10 + str[z] - '0';
		z++;
	}
	return (res * sign);
}
