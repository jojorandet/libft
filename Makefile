CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

#mandatory files
SOURCE_FILES = ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strncpy.c \
				ft_strtrim.c \
				ft_split.c \
				ft_putchar.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				

#bonus part 
SOURCE_FILES_BONUS = ft_lstnew_bonus.c \
					ft_lstadd_front.c \
					ft_lstsize.c \

OBJECT_FILES = $(SOURCE_FILES:.c=.o)
OBJECT_FILES_BONUS = $(SOURCE_FILES_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECT_FILES)
	ar rcs $(NAME) $(OBJECT_FILES)

#make bonus will be called to compile both the mandatory and the bonus files
bonus: $(OBJECT_FILES) $(OBJECT_FILES_BONUS)
	ar rcs $(NAME) $(OBJECT_FILES) $(OBJECT_FILES_BONUS)

%.o: %.c
	$(CC) $(CFLAGS) -I . -c $^ -o $@

clean:
	rm -f $(OBJECT_FILES) $(OBJECT_FILES_BONUS)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus