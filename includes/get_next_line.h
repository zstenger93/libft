/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:46:09 by zstenger          #+#    #+#             */
/*   Updated: 2023/01/24 10:40:34 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000
# endif

char	*get_next_line(int fd);

//parts of gnl, read, return the line and remove that line from the rest
char	*ft_remove_line(char *buffer);
char	*ft_return_line(char *buffer);
char	*ft_read_file(int fd, char *resource);

//extra helper functions
char	*ft_gnl_strjoin(char *resource, char *buffer);
char	*gnl_strchr(char *string, int lookfor);
size_t	ft_gnl_strlen(const char *theline);

#endif