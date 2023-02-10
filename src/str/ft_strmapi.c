/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:05:47 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:27:30 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/libft.h"

/* if there is a string and function to apply then applies the function f
to each char in the string and creat a new string
with malloc and the successfull applications of 'f'
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	z;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	z = 0;
	while (z < len)
	{
		str[z] = (*f)(z, s[z]);
		z++;
	}
	str[z] = '\0';
	return (str);
}
