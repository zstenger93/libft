CC	= 		cc
RM	= 		rm -rf
CFLAGS	= 	-Wall -Wextra -Werror
NAME = 		libft.a
SRC_DIR =	src/
OBJ_DIR =	objects/

CONVERT =	convert_int_str/ft_atoi			convert_int_str/ft_itoa		convert_int_str/ft_atol \
			convert_int_str/ft_atoi2		convert_int_str/ft_split	convert_int_str/ft_itoa1 \

ERRORS =	errors/error					errors/verror \

GNL	=		gnl/get_next_line				gnl/ft_gnlinelen			gnl/get_next_line_utils \

IS_TO =		is_to/ft_isalnum				is_to/ft_isprint			is_to/ft_tolower \
			is_to/ft_isascii				is_to/ft_isalpha			is_to/ft_isdigit \
			is_to/ft_toupper \

LIST =		list/ft_lstmap					list/ft_lstnew				list/ft_lstsize \
			list/ft_lstdelone				list/ft_lstiter				list/ft_lstlast \
			list/ft_lstadd_back				list/ft_lstclear			list/ft_lstadd_front \

MEM =		mem/ft_memcmp					mem/ft_memcpy				mem/ft_bzero \
			mem/ft_memchr					mem/ft_memset				mem/ft_calloc \
			mem/ft_memmove \

PRINTF =	printf/ft_pf_putchar			printf/ft_pf_putnbr			printf/ft_pf_putstr \
			printf/ft_print_hex				printf/ft_printf			printf/ft_pf_strchr \
			printf/ft_check_format \

FPRINTF =	fprintf/fpf_putchar				fprintf/fpf_putnbr			fprintf/fpf_putstr \
			fprintf/fprint_hex				fprintf/fprintf			fprintf/fpf_strchr \
			fprintf/fpf_check_format \

PUTFD =		putfd/ft_putchar_fd				putfd/ft_putendl_fd			putfd/ft_putnbr_fd \
			putfd/ft_putstr_fd \

STR =		str/ft_strlcat					str/ft_strncmp				str/ft_substr \
			str/ft_strchr					str/ft_strcmp				str/ft_strnstr \
			str/ft_strdup					str/ft_strlen				str/ft_strrchr \
			str/ft_strjoin					str/ft_strmapi				str/ft_strtrim \
			str/ft_strlcpy					str/ft_strstr				str/ft_nm_strjoin \
			str/ft_striteri \

UTILS =		utils/valid_int					utils/readstdin				utils/invalid_char_check \

SRC =		$(CONVERT)		$(ERRORS)		$(GNL) \
			$(IS_TO) 		$(LIST) 		$(MEM) \
			$(PRINTF) 		$(PUTFD) 		$(STR) \
			$(FPRINTF)		$(UTILS) \

SRCS = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC)))

all:	$(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR)

fclean:	clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY:	all bonus clean fclean re
