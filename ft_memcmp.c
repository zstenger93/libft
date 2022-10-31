/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:34:56 by zstenger          #+#    #+#             */
/*   Updated: 2022/10/22 12:57:47 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

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
		if (*(unsigned char *)(s1 + z) != *(unsigned char *)(s2 + z))
			return (*(unsigned char *)(s1 + z) - *(unsigned char *)(s2 + z));
		z++;
	}
	return (0);
}
