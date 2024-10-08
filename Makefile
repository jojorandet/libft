CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

TEST_DIR = ./.tests
HEADER_DIR = -I .

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
				main.c 
TEST_FILES = $(addprefix $(TEST_DIR)/,$(TEST_FUNCTIONS))
TEST_OBJECT_FILES = $(TEST_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECT_FILES)
	ar rcs $(NAME) $(OBJECT_FILES)

test: $(NAME) $(TEST_OBJECT_FILES)
	$(CC) $(CFLAGS) $(HEADER_DIR) -fsanitize=address -o test_runner $(TEST_OBJECT_FILES) -L. -lft
	./test_runner

$(TEST_DIR)/%.o: $(TEST_DIR)/%.c
	$(CC) $(CFLAGS) $(HEADER_DIR) -c $< -o $@

clean:
	rm -f $(OBJECT_FILES) $(TEST_OBJECT_FILES)

fclean: clean 
	rm -f $(NAME) test_runner

re: fclean all

.PHONY: all clean fclean re test