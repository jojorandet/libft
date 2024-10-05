CC = gcc
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SOURCE_DIR = ./source
TEST_DIR = ./.tests
HEADER = ./includes
BUILD = ./build

FUNCTIONS_NAMES = ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c\
				ft_strlen.c\

SOURCE_FILES = $(addprefix $(SOURCE_DIR)/,$(FUNCTIONS_NAMES))
OBJ_FILES = $(addprefix $(BUILD)/,$(FUNCTIONS_NAMES:.c=.o))

TEST_FUNCTIONS = test_ft_isalpha.c test_ft_isdigit.c test_ft_isalnum.c test_ft_isascii.c test_ft_isprint.c \
				test_ft_strlen.c main.c 
TEST_FILES = $(addprefix $(TEST_DIR)/,$(TEST_FUNCTIONS))
TEST_OBJ = $(addprefix $(BUILD)/,$(TEST_FUNCTIONS:.c=.o))

#main build targets used in the make 
all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

test: $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) -I$(HEADER) -fsanitize=address -o test_runner $(TEST_OBJ) -L. -lft
	./test_runner

#compilation rules
$(BUILD)/%.o: $(SOURCE_DIR)/%.c
	@mkdir -p $(BUILD)
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $@

$(BUILD)/%.o: $(TEST_DIR)/%.c
	@mkdir -p $(BUILD)
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $@

#cleaning rules 
clean:
	rm -rf $(BUILD)/*.o

fclean: clean 
	rm -rf $(NAME) test_runner

re: fclean all

.PHONY: all clean fclean re test