/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:46:45 by zstenger          #+#    #+#             */
/*   Updated: 2022/10/25 17:02:52 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/* allocates enough memory for the copy of string 's1', does the copy and
returns a pointer to the copy */
char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	z;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	z = 0;
	while (s1[z])
	{
		str[z] = s1[z];
		z++;
	}
	str[z] = 0;
	return (str);
}
