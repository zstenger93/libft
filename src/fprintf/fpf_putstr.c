/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fpf_putstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:13:51 by zstenger          #+#    #+#             */
/*   Updated: 2023/03/17 13:55:59 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/fprintf.h"

/*
print out null if no string after the format specifier
or print the length of the string until the terminating
null
*/
void	fpf_putstr(char *str, int *input_len)
{
	int	length;

	if (!str)
	{
		fpf_putstr("(null)", input_len);
		return ;
	}
	length = 0;
	while (str[length] != '\0')
	{
		fpf_putchar(str[length], input_len);
		length++;
	}
}
