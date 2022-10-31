/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:40:21 by zstenger          #+#    #+#             */
/*   Updated: 2022/10/25 15:54:46 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/*
allocates memory for the concatenation of s1 and s2 and returns the new string.
if it fails then return null
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	z;
	size_t	s;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
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
	str[s] = 0;
	return (str);
}
