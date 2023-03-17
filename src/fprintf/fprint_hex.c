/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprint_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:46:37 by zstenger          #+#    #+#             */
/*   Updated: 2023/03/17 13:55:51 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/fprintf.h"

/*
@brief Divide the decimal number by 16.   Treat the division as an integer
division.
Write down the remainder (in hexadecimal)
Divide the result again by 16.  Treat the division as an integer division.
repeat until the result is 0
The hex value is the digit sequence of the remainders from the last to first.

@param hex_format lower or uppercase.

@param number is the number given as input.
@param 255 because the hex table range is from 0 - 255.
if bigger number > 255 use recursion untill you reach below 16
@param 16 if 16 < number < 256 just divide and use the remainder
if the number is smaller than 16 which is the amount of hex chars then
write the reminder.
*/
void	fprint_hex(unsigned long number, char *hex_format, int *input_len)
{
	if (number > 255)
	{
		fprint_hex((number / 16), hex_format, input_len);
		fpf_putchar(hex_format[number % 16], input_len);
	}
	else
	{
		if (number >= 16)
			fpf_putchar(hex_format[number / 16], input_len);
		fpf_putchar(hex_format[number % 16], input_len);
	}
}
