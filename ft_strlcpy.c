/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:46:52 by zstenger          #+#    #+#             */
/*   Updated: 2022/10/22 14:58:54 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/*
copies from src to dst until size - 1 (for null) an returns the string
*/
size_t	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	size_t	z;

	z = 0;
	if (size > 0)
	{
		while (src[z] && z < (size - 1))
		{
			dst[z] = src[z];
			z++;
		}
		dst[z] = 0;
	}
	while (src[z])
		z++;
	return (z);
}
