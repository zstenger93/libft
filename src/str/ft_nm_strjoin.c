/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nm_strjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:40:21 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:27:06 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/libft.h"

/*
allocates memory for the concatenation of s1 and s2 and returns the new string.
if the allocation fails return null
*/
char	*ft_nm_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	z;
	size_t	s;

	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	z = 0;
	s = 0;
	while (s1[z])
	{
		str[s++] = s1[z];
		z++;
	}
	z = 0;
	while (s2[z])
	{
		str[s++] = s2[z];
		z++;
	}
	str[s] = '\0';
	return (str);
}
