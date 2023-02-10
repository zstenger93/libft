/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:36:01 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:27:51 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/libft.h"

/* allocates the memory with malloc and returns a substring from the string 's'
which begins at 'start' and it's size is 'len'
returns null if the allocation fails
protection if there is no string or the size is bigger than len
malloc the strign
check if there is a string
copy the result to the string via str[t++] = s[count]
*/
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	count;
	size_t	t;
	char	*str;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (size > len)
		size = len;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	count = 0;
	t = 0;
	while (s[count] != '\0')
	{
		if (count >= start && t < len)
			str[t++] = s[count];
		count++;
	}
	str[t] = '\0';
	return (str);
}
