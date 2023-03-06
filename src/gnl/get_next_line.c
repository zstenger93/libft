/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:48:07 by zstenger          #+#    #+#             */
/*   Updated: 2023/02/10 16:25:02 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/get_next_line.h"
#include "../../includes/libft.h"

/*
allocate memory for buffer size+1, check if its ok
start reading while no new line and the reading_bytes is not 0
read to buffer and set the byte to \0 to avoid leaks
putting what we read with strjoin from buffer to resource
and finally free the buffer and return the resource
*/
char	*ft_read_file(int fd, char *resource)
{
	char	*buffer;
	int		reading_bytes;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	reading_bytes = 1;
	while (!gnl_strchr(resource, '\n') && reading_bytes != 0)
	{
		reading_bytes = read(fd, buffer, BUFFER_SIZE);
		buffer[reading_bytes] = '\0';
		resource = ft_gnl_strjoin(resource, buffer);
	}
	free(buffer);
	return (resource);
}

/*
calc length of the line, free the buffer if necessary
allocating the memory for the remaining resource
put the remaining buffer on file_minus_line, set the \0
free the buffer and return the remaining resource aka
file_minus_line
*/
char	*ft_remove_line(char *buffer)
{
	int		z;
	int		s;
	char	*file_minus_line;

	z = 0;
	while (buffer[z] && buffer[z] != '\n')
		z++;
	if (!buffer[z])
	{
		free(buffer);
		return (NULL);
	}
	file_minus_line = malloc(sizeof(char) * (ft_strlen(buffer) - z + 1));
	if (!file_minus_line)
		return (NULL);
	z++;
	s = 0;
	while (buffer[z])
		file_minus_line[s++] = buffer[z++];
	file_minus_line[s] = '\0';
	free(buffer);
	return (file_minus_line);
}

/*
calc the length until new line then if we ahve it allocate the
length + 2 <-(for \n and \0) else allocate length + 1 <-(for \0 only)
put the buffer on the line, set the \n, \0 and return the line
*/
char	*ft_return_line(char *buffer)
{
	char	*line;
	int		z;

	z = 0;
	if (!buffer[z])
		return (NULL);
	while (buffer[z] && buffer[z] != '\n')
		z++;
	if (buffer[z] == '\n')
		line = malloc(sizeof(char) * (z + 2));
	if (buffer[z] == '\0')
		line = malloc(sizeof(char) * (z + 1));
	if (!line)
		return (NULL);
	z = 0;
	while (buffer[z] && buffer[z] != '\n')
	{
		line[z] = buffer[z];
		z++;
	}
	if (buffer[z] == '\n')
		line[z++] = '\n';
	line[z] = '\0';
	return (line);
}

/*
OPEN_MAX is the constant that defines the maximum number of open files allowed
for a single program(1024) so with it we can read multiple 'fd' at the same time
|----------actually OPEN_MAX value depends on the type of system!-----------|
|___________________________________________________________________________|
when read returns error (-1) we should clear the static buffer and for extra
protectionset it to NULL
read
return line
remove line return the rest
*/
char	*get_next_line(int fd)
{
	static char	*buffer[1024];
	char		*line;

	if (read(fd, NULL, 0) == -1)
	{
		free(buffer[fd]);
		buffer[fd] = NULL;
		return (NULL);
	}
	if (BUFFER_SIZE < 1 || fd < 0)
		return (NULL);
	buffer[fd] = ft_read_file(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	line = ft_return_line(buffer[fd]);
	buffer[fd] = ft_remove_line(buffer[fd]);
	return (line);
}
