/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:46:34 by zstenger          #+#    #+#             */
/*   Updated: 2022/10/30 11:17:18 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

//copies 'n' bytes of memory from 'src' to 'dst', return dst
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
