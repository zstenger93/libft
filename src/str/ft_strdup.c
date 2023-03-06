/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:46:45 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:27:13 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/libft.h"

/* allocates enough memory for the copy of string 's1', does the copy and
returns a pointer to the copy */
char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*copy;

	len = ft_strlen((char *)s1) + 1;
	copy = ft_calloc(len, sizeof(char));
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s1, len);
	return (copy);
}
