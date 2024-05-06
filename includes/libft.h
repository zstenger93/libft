/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:38:11 by zstenger          #+#    #+#             */
/*   Updated: 2023/03/17 14:21:20 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include "get_next_line.h"
# include "ft_printf.h"
# include "fprintf.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

void	verror(void);

void	error(int *list);

size_t	ft_gnlinelen(const char *line);

int		ft_atoi(const char *str);

int		ft_atoi2(const char *str, int *list);

long	ft_atol(char *str);

void	valid_int(long res);

void	invalid_char_check(char *str);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size);

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memset(void *b, int c, size_t len);

char	*ft_strchr(const char *s, int c);

char	*ft_strdup(const char *s1);

size_t	ft_strlcat(char *dst, const char *src, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t n);

size_t	ft_strlen(const char *s);

int		readstdin(char **line);

int		ft_strcmp(char *s1, char *s2);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strstr(const char *haystack, const char *needle);

char	*ft_strrchr(const char *s, int c);

char	*ft_substr(const char *s, unsigned int start, size_t len);

char	*ft_nm_strjoin(char const *s1, char const *s2);

char	*ft_strjoin(char *s1, char *s2);

char	*ft_strtrim(char const *s1, char const *set);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

char	*ft_itoa1(int value, char *str, int base);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

//bonus functions
t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new_element);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new_element);

int		ft_lstsize(t_list *lst);

void	ft_lstdelone(t_list *lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif