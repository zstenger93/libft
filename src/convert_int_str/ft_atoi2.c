/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:35:01 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:24:34 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_atoi2(const char *str, int *list)
{
	int	z;
	int	res;
	int	sign;
	int	temp;

	z = 0;
	res = 0;
	sign = 1;
	temp = 0;
	if (str[z] == '-')
		sign *= ++z * -1;
	else if (str[z] == '+')
		z++;
	while (str[z] >= '0' && str[z] <= '9')
	{
		if (res == 214748364 && str[z] == '8' && sign == -1)
			return (-2147483648);
		res = res * 10 + str[z] - '0';
		z++;
		if (res < temp)
			error(list);
	}
	return (res * sign);
}
