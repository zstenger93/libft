/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnlinelen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:23:23 by zstenger          #+#    #+#             */
/*   Updated: 2022/12/03 14:25:22 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_gnlinelen(const char *line)
{
	size_t	count;

	count = 0;
	while (line[count] != '\0' && line[count] != '\n')
	{
		count++;
	}
	return (count);
}