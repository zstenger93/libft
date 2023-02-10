/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:46:40 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:26:25 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/libft.h"

/*
writes 'len' bytes of value 'c' -converted to unsigned char- to the string 'b'
*/
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	z;

	z = 0;
	while (z < len)
	{
		*(unsigned char *)(b + z) = (unsigned char)c;
		z++;
	}
	return (b);
}
