/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:46:59 by zstenger          #+#    #+#             */
/*   Updated: 2022/10/30 11:19:54 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* returns 'needle' from the string 'haystack' where no more than 'len'
bytes are searched
if the needle is an emtpy string then haystack is returned
if the needle is not found in the haystack, null is returned
else a pointer returned to the first occurance of needle.
protections for the edge cases..
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	z;
	size_t	s;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (!len)
		return (NULL);
	z = 0;
	while (haystack[z] != '\0' && z < len)
	{
		s = 0;
		while (haystack[z + s] != '\0' && needle[s] != '\0'
			&& z + s < len && haystack[z + s] == needle[s])
			s++;
		if (needle[s] == '\0')
			return ((char *)(haystack + z));
		z++;
	}
	return (NULL);
}
