CC = gcc
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SOURCE_DIR = ./source
TEST_DIR = ./.tests
HEADER = ./includes
BUILD = ./build

FUNCTIONS_NAMES = ft_isalpha.c ft_isdigit.c
SOURCE_FILES = $(addprefix $(SOURCE_DIR)/,$(FUNCTIONS_NAMES))
OBJ_FILES = $(addprefix $(BUILD)/,$(FUNCTIONS_NAMES:.c=.o))

TEST_FUNCTIONS = test_ft_isalpha.c test_ft_isdigit.c main.c
TEST_FILES = $(addprefix $(TEST_DIR)/,$(TEST_FUNCTIONS))
TEST_OBJ = $(addprefix $(BUILD)/,$(TEST_FUNCTIONS:.c=.o))

#main build targets used in the make 
 
all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

test: $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) -I$(HEADER) -o test_runner $(TEST_OBJ) -L. -lft
	./test_runner

#compilation rules

#regle to create build files from source files and to create a build folder and compile source into object 
$(BUILD)/%.o: $(SOURCE_DIR)/%.c
	@mkdir -p $(BUILD)
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $@

#rule to create build files from the test files .c (same as above)
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

