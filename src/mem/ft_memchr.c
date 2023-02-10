/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:31:09 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:26:11 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/libft.h"

/*
locates the first occurance of 'c' in the string 's' and returns a pointer to
the character if found else returns null
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	length;

	length = 0;
	while (length < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		length++;
		s++;
	}
	return (NULL);
}
