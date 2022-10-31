/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:13:14 by zstenger          #+#    #+#             */
/*   Updated: 2022/10/14 14:47:50 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

//outputs the char 'c' to the given file descriptor 'fd'
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
