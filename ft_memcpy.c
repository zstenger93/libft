/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:46:34 by zstenger          #+#    #+#             */
/*   Updated: 2022/11/03 10:40:55 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/*
copies 'n' bytes of memory from 'src' to 'dst', return dst
not recommended to use because dst and src can overlap and the behavior is
undefined
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	z;

	if (!dst && !src)
		return (NULL);
	z = 0;
	while (z < n)
	{
		*(char *)(dst + z) = *(char *)(src + z);
		z++;
	}
	return (dst);
}
