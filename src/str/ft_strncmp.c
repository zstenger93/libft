/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:46:57 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:27:32 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
compares str1 and str2 up to 'n' bytes and returns 0 if the 2 string is
equal, 1 if str1 is bigger or -1 if str2 is bigger
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	z;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	z = 0;
	while (((*str1 != '\0') || (*str2 != '\0')) && z < n)
	{
		if (*str1 > *str2)
			return (1);
		else if (*str1 < *str2)
			return (-1);
		str1++;
		str2++;
		z++;
	}
	return (0);
}
