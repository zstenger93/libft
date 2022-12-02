/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:40:01 by zstenger          #+#    #+#             */
/*   Updated: 2022/11/12 10:38:01 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

/*
checking for the conversion type with conversion_type of the format in the
input and applies the correct function to print out the result
0x is the prefix for hexadecimals and used it to get the same
output as printf while printing pointers

• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.
*/
void	ft_check_format(va_list args, char conversion_type, int *input_len)
{
	if (conversion_type == '%')
		ft_pf_putchar('%', input_len);
	else if (conversion_type == 'c')
		ft_pf_putchar(va_arg(args, int), input_len);
	else if (conversion_type == 's')
		ft_pf_putstr(va_arg(args, char *), input_len);
	else if (conversion_type == 'p')
	{
		ft_pf_putstr("0x", input_len);
		ft_print_hex(va_arg(args, unsigned long), HEX_LC, input_len);
	}
	else if (conversion_type == 'd' || conversion_type == 'i')
		ft_pf_putnbr(va_arg(args, int), input_len);
	else if (conversion_type == 'u')
		ft_pf_putnbr(va_arg(args, unsigned int), input_len);
	else if (conversion_type == 'x')
		ft_print_hex(va_arg(args, unsigned int), HEX_LC, input_len);
	else if (conversion_type == 'X')
		ft_print_hex(va_arg(args, unsigned int), HEX_UC, input_len);
}
