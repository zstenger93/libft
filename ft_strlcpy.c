/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:46:52 by zstenger          #+#    #+#             */
/*   Updated: 2022/12/03 19:18:57 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/*
copies from src to dst until size - 1 (for null) an returns the string
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	a;

	a = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (a < size - 1 && src[a])
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = 0;
	return (ft_strlen(src));
}
