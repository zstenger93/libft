/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:48:10 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:24:59 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/get_next_line.h"
#include "../../includes/libft.h"

//get the length of the line and resource
// size_t	ft_strlen(const char *theline)
// {
// 	int	z;

// 	if (!theline)
// 		return (0);
// 	z = 0;
// 	while (theline[z] != '\0')
// 		z++;
// 	return (z);
// }

// for finding the '\n' 
char	*gnl_strchr(char *string, int lookfor)
{
	int	z;

	z = 0;
	if (!string)
		return (0);
	while (string[z] != '\0')
	{
		if (string[z] == (char) lookfor)
			return ((char *)&string[z]);
		z++;
	}
	return (0);
}

/*
first things first if there is no resource, allocating one byte and setting
the \0 to avoid leaks
allocating, and if we have resource putting it on a string until \0, then 
afterwards putting the buffer as well and setting the \0 at the end then
free resource
*/
char	*ft_gnl_strjoin(char *resource, char *buffer)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!resource)
	{
		resource = malloc(1 * sizeof(char));
		resource[0] = '\0';
	}
	if (!buffer || !resource)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(resource) + ft_strlen(buffer) + 1));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	if (resource)
		while (resource[++i] != '\0')
			str[i] = resource[i];
	while (buffer[j] != '\0')
		str[i++] = buffer[j++];
	str[ft_strlen(resource) + ft_strlen(buffer)] = '\0';
	free(resource);
	return (str);
}
