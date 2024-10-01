# Compiler and flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Library name
NAME = libft.a

# Directories
SOURCE_DIR = ./source
TEST_DIR = ./.tests
HEADER = ./includes

# Source files
FUNCTIONS_NAMES = ft_isalpha.c   # Add your actual .c files

# File paths for source and test files
SOURCE_FILES = $(addprefix $(SOURCE_DIR)/,$(FUNCTIONS_NAMES))
TEST_FILES = $(addprefix $(TEST_DIR)/test_,$(FUNCTIONS_NAMES))
TEST_FILES += $(TEST_DIR)/test_main.c

# Object files for source and test files
OBJ = $(SOURCE_FILES:.c=.o)
TOBJ = $(TEST_FILES:.c=.o)

# Rule to compile the library
all: $(NAME)

# Rule to create .o files from .c files (for sources and TEST_FILES)
%.o: %.c
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $@

# Rule to build the library from object files
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Rule to compile and run TEST_FILES
test: $(OBJ) $(TOBJ)
	$(CC) $(CFLAGS) -I$(HEADER) -o test_runner $(TEST_DIR)/test_main.c -L. -lft
	./test_runner

# Rule to clean object files
clean:
	rm -rf $(OBJ) $(TOBJ)

# Rule to clean everything (object files + library + test binaries)
fclean: clean
	rm -rf $(NAME) test_runner

# Rule to force recompilation (clean + recompile everything)
re: fclean all

# Declare targets as PHONY to avoid conflicts with actual file names
.PHONY: all clean fclean re test

