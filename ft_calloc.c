/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:46:10 by zstenger          #+#    #+#             */
/*   Updated: 2022/10/25 15:39:33 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/*
allocates enough memory for 'count' objects that are 
'size' bytes of memory and returns a pointer to the allocated memory
SIZE_MAX is the max value of type size_t and added for protection against
segmentation fault
max is added so calloc will work with empty string
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	max;

	if (size > 0 && (SIZE_MAX / size) < count)
		return (NULL);
	max = size * count;
	ptr = malloc(max);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, max);
	return (ptr);
}
