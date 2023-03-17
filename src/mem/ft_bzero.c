/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:45:57 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:25:58 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/libft.h"

/*
erases the data in the n bytes of the memory starting at the location
pointed by 's' by writing zeros to that area'
	if (!s)
		return ;
*/
void	ft_bzero(void *s, size_t n)
{
	size_t	count;
	char	*c;

	count = 0;
	c = (char *)s;
	while (count < n)
	{
		c[count] = '\0';
		count++;
	}
}
