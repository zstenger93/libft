# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 20:08:03 by zstenger          #+#    #+#              #
#    Updated: 2022/10/17 12:08:34 by zstenger         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			ft_calloc.c ft_bzero.c ft_isprint.c ft_memcpy.c ft_strjoin.c \
			ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strdup.c \
			ft_strlcpy.c ft_strlen.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
			ft_toupper.c ft_strncmp.c ft_memcmp.c ft_memchr.c ft_substr.c \
			ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_strmapi.c ft_split.c ft_itoa.c ft_striteri.c \
			
OBJS	=	$(SRCS:.c=.o)

BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstsize.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c

BONUS_OBJS	=	$(BONUS:.c=.o)

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-Wextra -Werror -Wall -I.

NAME	=	libft.a

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus:	$(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
	$(NAME)

.PHONY:	all bonus clean fclean re
