/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:34:56 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:26:13 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/libft.h"

/* compares byte against byte in string s1 and string s2 and both assumed to be
'n' long. 0 if equal otherwise the difference between the first 2 differing
bytes
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	z;

	z = 0;
	while (z < n)
	{
		if (*(unsigned char *)(s1) != *(unsigned char *)(s2))
			return (*(unsigned char *)(s1) - *(unsigned char *)(s2));
		z++;
		s1++;
		s2++;
	}
	return (0);
}
