/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:13:51 by zstenger          #+#    #+#             */
/*   Updated: 2022/11/11 18:40:31 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

/*
print out null if no string after the format specifier
or print the length of the string until the terminating
null
*/
void	ft_pf_putstr(char *str, int *input_len)
{
	int	length;

	if (!str)
	{
		ft_pf_putstr("(null)", input_len);
		return ;
	}
	length = 0;
	while (str[length] != '\0')
	{
		ft_pf_putchar(str[length], input_len);
		length++;
	}
}
