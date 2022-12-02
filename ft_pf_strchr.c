/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_strchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:46:42 by zstenger          #+#    #+#             */
/*   Updated: 2022/11/11 18:43:58 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

char	*ft_pf_strchr(const char *s, int c)
{
	int	z;

	z = 0;
	while (s[z])
	{
		if (s[z] == (char)c)
			return ((char *)(s + z));
		z++;
	}
	if (s[z] == (char)c)
		return ((char *)(s + z));
	return (NULL);
}
