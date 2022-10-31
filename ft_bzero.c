/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:45:57 by zstenger          #+#    #+#             */
/*   Updated: 2022/10/22 12:01:47 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/*
erases the data in the n bytes of the memory starting at the location
pointed by 's' by writing zeros to that area'
*/
void	ft_bzero(void *z, size_t s)
{
	size_t	n;

	if (!s)
		return ;
	n = 0;
	while (n < s)
	{
		*(char *)(z + n) = 0;
		n++;
	}
}
