/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readstdin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:19:50 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:28:01 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	readstdin(char **line)
{
	char	*buff;
	char	input;
	int		operation;
	int		i;

	i = 0;
	buff = (char *)malloc(BUFFER_SIZE);
	if (!buff)
		return (-1);
	operation = read(0, &input, 1);
	while (operation && input != '\n' && input != '\0')
	{
		if (input != '\n' && input != '\0')
			buff[i] = input;
		i++;
		operation = read(0, &input, 1);
	}
	buff[i] = '\n';
	buff[++i] = '\0';
	*line = ft_strdup(buff);
	return (free(buff), i);
}
