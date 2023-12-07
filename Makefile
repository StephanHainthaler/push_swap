NAME := push_swap

CC := cc
CFLAGS := -Wall -Wextra -Werror -g

SRC_DIR := src
OBJ_DIR := obj
LIBFT_DIR := Libft
MAIN_DIR := main
SORT_DIR := sorting
OP_DIR := operations

SRCS := $(SRC_DIR)/$(MAIN_DIR)/push_swap.c \
        $(SRC_DIR)/$(SORT_DIR)/utils.c \
        $(SRC_DIR)/$(SORT_DIR)/sort_stacks.c \
        $(SRC_DIR)/$(SORT_DIR)/sort_types.c \
        $(SRC_DIR)/$(OP_DIR)/op_swap.c \
        $(SRC_DIR)/$(OP_DIR)/op_push.c \
        $(SRC_DIR)/$(OP_DIR)/op_rotate.c \
        $(SRC_DIR)/$(OP_DIR)/op_reverse_rotate.c

OBJS := $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

.SILENT:

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)/$(MAIN_DIR)
	mkdir -p $(OBJ_DIR)/$(SORT_DIR)
	mkdir -p $(OBJ_DIR)/$(OP_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	cd $(LIBFT_DIR) && make -s
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT_DIR)/libft.a

clean:
	rm -rf $(OBJ_DIR)
	cd $(LIBFT_DIR) && make -s clean

fclean: clean
	rm -rf $(NAME)
	cd $(LIBFT_DIR) && make -s fclean

re: fclean all

.PHONY: all clean fclean re
