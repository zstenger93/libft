/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:46:36 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:26:22 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/libft.h"

/* copies 'len' bytes from string 'src' to string 'dst' 
should be done in a non destructible way so shouldn't be copied more than the
'dst' can hold
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	z;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		z = (int)len - 1;
		while (z >= 0)
		{
			*(char *)(dst + z) = *(char *)(src + z);
			z--;
		}
	}
	else
	{
		z = 0;
		while (z < (int)len)
		{
			*(char *)(dst + z) = *(char *)(src + z);
			z++;
		}
	}
	return (dst);
}
