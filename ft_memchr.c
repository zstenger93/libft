/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:31:09 by zstenger          #+#    #+#             */
/*   Updated: 2022/10/25 17:03:24 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/*
locates the first occurance of 'c' in the string 's' and returns a pointer to
the character if found else returns null
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	z;

	z = 0;
	while (z < n)
	{
		if (*(unsigned char *)(s + z) == (unsigned char)c)
			return ((void *)(s + z));
		z++;
	}
	return (NULL);
}
