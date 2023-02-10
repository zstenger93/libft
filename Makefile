CC	= 		cc
RM	= 		rm -f
CFLAGS	= 	-Wall -Wextra -Werror
NAME = 		libft.a

CONVERT = 	src/convert_int_str/ft_atoi.c		src/convert_int_str/ft_itoa.c	src/convert_int_str/ft_atol.c \
			src/convert_int_str/ft_atoi2.c		src/convert_int_str/ft_split.c \

ERRORS = 	src/errors/error.c					src/errors/verror.c \

GNL	= 		src/gnl/get_next_line.c				src/gnl/ft_gnlinelen.c			src/gnl/get_next_line_utils.c \

IS_TO = 	src/is_to/ft_isalnum.c				src/is_to/ft_isprint.c			src/is_to/ft_tolower.c \
			src/is_to/ft_isascii.c				src/is_to/ft_isalpha.c			src/is_to/ft_isdigit.c \
			src/is_to/ft_toupper.c \

LIST = 		src/list/ft_lstmap.c 				src/list/ft_lstnew.c			src/list/ft_lstsize.c \
			src/list/ft_lstdelone.c 			src/list/ft_lstiter.c 			src/list/ft_lstlast.c \
			src/list/ft_lstadd_back.c			src/list/ft_lstclear.c			src/list/ft_lstadd_front.c \

MEM =  		src/mem/ft_memcmp.c					src/mem/ft_memcpy.c				src/mem/ft_bzero.c \
			src/mem/ft_memchr.c  				src/mem/ft_memset.c				src/mem/ft_calloc.c \
			src/mem/ft_memmove.c \

PRINTF = 	src/printf/ft_pf_putchar.c 			src/printf/ft_pf_putnbr.c		src/printf/ft_pf_putstr.c \
			src/printf/ft_print_hex.c			src/printf/ft_printf.c			src/printf/ft_pf_strchr.c \
			src/printf/ft_check_format.c \

PUTFD =		src/putfd/ft_putchar_fd.c			src/putfd/ft_putendl_fd.c		src/putfd/ft_putnbr_fd.c \
			src/putfd/ft_putstr_fd.c \

STR =   	src/str/ft_strlcat.c				src/str/ft_strncmp.c			src/str/ft_substr.c	\
			src/str/ft_strchr.c					src/str/ft_strcmp.c				src/str/ft_strnstr.c \
			src/str/ft_strdup.c  				src/str/ft_strlen.c  			src/str/ft_strrchr.c \
			src/str/ft_strjoin.c 				src/str/ft_strmapi.c 			src/str/ft_strtrim.c \
			src/str/ft_strlcpy.c				src/str/ft_strstr.c				src/str/ft_nm_strjoin.c \
			src/str/ft_striteri.c \

UTILS = 	src/utils/valid_int.c				src/utils/readstdin.c			src/utils/invalid_char_check.c \

SRC	= 		$(CONVERT)	$(ERRORS)	$(GNL) \
			$(IS_TO) 	$(LIST) 	$(MEM) \
			$(PRINTF) 	$(PUTFD) 	$(STR) \
			$(UTILS) \

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean:	clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY:	all bonus clean fclean re
