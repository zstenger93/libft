/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:46:48 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:27:21 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/libft.h"

/*
copies 's2' after 's1' with terminating null at the end
s1 must have enough space to do so. not recommended to use for security 
reasons
 dst_size == 0 is extra protection for edge case
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	z;
	size_t	s;
	size_t	dst_len;
	size_t	src_len;

	if (!dst && dst_size == 0)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= dst_size)
		return (dst_size + src_len);
	s = dst_len;
	z = 0;
	while ((dst_size - dst_len -1) > z && src[z])
	{
		dst[s] = src[z];
		s++;
		z++;
	}
	dst[s] = '\0';
	return (dst_len + src_len);
}
