# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 09:57:42 by zstenger          #+#    #+#              #
#    Updated: 2022/11/03 11:44:33 by zstenger         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC		=	ft_isalnum.c	ft_isprint.c	ft_memcmp.c		ft_putchar_fd.c \
			ft_strlcat.c 	ft_strncmp.c 	ft_substr.c 	ft_atoi.c \
			ft_itoa.c		ft_memcpy.c  	ft_putendl_fd.c ft_strchr.c \
			ft_strnstr.c 	ft_tolower.c 	ft_bzero.c   	ft_isascii.c \
			ft_putnbr_fd.c  ft_strdup.c  	ft_strlen.c  	ft_strrchr.c \
			ft_calloc.c  	ft_isdigit.c 	ft_memchr.c  	ft_memset.c	\
			ft_strjoin.c 	ft_strmapi.c 	ft_strtrim.c	ft_striteri.c \
			ft_putstr_fd.c	ft_split.c		ft_isalpha.c	ft_strlcpy.c \
			ft_memmove.c	ft_toupper.c

OBJ		= $(SRC:.c=.o)

BONUS	=	ft_lstadd_back.c	ft_lstadd_front.c	ft_lstclear.c  \
			ft_lstdelone.c 		ft_lstiter.c 		ft_lstlast.c  \
			ft_lstmap.c 		ft_lstnew.c 		ft_lstsize.c

BONUS_OBJ	= $(BONUS:.c=.o)

CC	= cc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJ)
		ar -rcs $(NAME) $(OBJ)

bonus:	$(OBJ) $(BONUS_OBJ)
		ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

clean:
		$(RM) $(OBJ) $(BONUS_OBJ)

fclean:	clean
		$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY:	all bonus clean fclean re
