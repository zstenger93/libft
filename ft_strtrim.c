/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:49:57 by zstenger          #+#    #+#             */
/*   Updated: 2022/10/30 10:57:24 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/*
looks for the characters needed to be removed from the start and the end of
the string
*/
static int	ft_char_in_set(char c, char const *set)
{
	size_t	z;

	z = 0;
	while (set[z])
	{
		if (set[z] == c)
			return (1);
		z++;
	}
	return (0);
}

/*
go thru the string and take out the chars in set from the start of the string
assign the lengtht of s1 to end
go thru the string from the end and take out chars until the start
malloc the memory for the result which is end minus start +1 for null
return the string
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	z;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	z = 0;
	while (start < end)
		str[z++] = s1[start++];
	str[z] = 0;
	return (str);
}
