/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:10:23 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:27:45 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[h] != 0)
	{
		if (haystack[h] == needle[n])
		{
			if (needle[n + 1] == 0)
				return ((char *)haystack + h - n);
			n++;
		}
		else
		{
			h = h - n;
			n = 0;
		}
		h++;
	}
	return (NULL);
}
