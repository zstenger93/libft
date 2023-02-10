/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:44:29 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:26:59 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/libft.h"

/*
if smaller than 0 puts the - sign, multiples the number by -1 then prints
the number else just prints the number.
outputs the integer 'n' to the given file descriptor 'fd'
*/
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	number = (unsigned int)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number *= -1;
	}
	if (number >= 10)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd((char)(number % 10 + '0'), fd);
}
