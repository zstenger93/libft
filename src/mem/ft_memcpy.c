/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:46:34 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:26:18 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/libft.h"

/*
copies 'n' bytes of memory from 'src' to 'dst', return dst
not recommended to use because dst and src can overlap and the behavior is
undefined
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && dst != src)
	{
		((uint8_t *)dst)[i] = ((uint8_t *)src)[i];
		i++;
	}
	return (dst);
}
