CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

TEST_DIR = ./.tests
HEADER_DIR = -I .
# FOR_FSANITIZE = fsanitize=address -g3
# FOR_VALGRIND = -g

FUNCTIONS_NAMES = ft_isalpha.c \
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

OBJECT_FILES = $(FUNCTIONS_NAMES:.c=.o)

TEST_FUNCTIONS = test_ft_isalpha.c \
				test_ft_isdigit.c \
				test_ft_isalnum.c \
				test_ft_isascii.c \
				test_ft_isprint.c \
				test_ft_strlen.c \
				test_ft_memset.c \
				test_ft_bzero.c \
				test_ft_memcpy.c \
				test_ft_memmove.c \
				test_ft_strlcpy.c \
				test_ft_strlcat.c \
				test_ft_toupper.c \
				test_ft_tolower.c \
				test_ft_strchr.c \
				test_ft_strrchr.c \
				test_ft_strncmp.c \
				test_ft_memchr.c \
				test_ft_memcmp.c \
				main.c 
TEST_FILES = $(addprefix $(TEST_DIR)/,$(TEST_FUNCTIONS))
TEST_OBJECT_FILES = $(TEST_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECT_FILES)
	ar rcs $(NAME) $(OBJECT_FILES)

test: $(NAME) $(TEST_OBJECT_FILES)
	$(CC) $(CFLAGS) $(HEADER_DIR) $(FOR_FSANITIZE) $(FOR_VALGRIND) -o test_runner $(TEST_OBJECT_FILES) -L. -lft
	./test_runner

$(TEST_DIR)/%.o: $(TEST_DIR)/%.c
	$(CC) $(CFLAGS) $(HEADER_DIR) -c $< -o $@

clean:
	rm -f $(OBJECT_FILES) $(TEST_OBJECT_FILES)

fclean: clean 
	rm -f $(NAME) test_runner

re: fclean all

.PHONY: all clean fclean re test