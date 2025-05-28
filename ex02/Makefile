NAME = account

# directories
SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = include/

# source files (sem diretórios)
SRC_FILES = tests.cpp Account.cpp
OBJ_FILES = tests.o Account.o

# compiler and flags
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)

# default target
all: $(NAME)

# final binary
$(NAME): $(addprefix $(OBJ_DIR)/, $(OBJ_FILES))
	$(CC) $(CFLAGS) $^ -o $@

# rule to build obj/file.o from src/file.cpp
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# create object directory
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# clean object files
clean:
	rm -rf $(OBJ_DIR)

# clean all
fclean: clean
	rm -f $(NAME)

# rebuild
re: fclean all

.PHONY: all clean fclean re