# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shaintha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 09:25:01 by shaintha          #+#    #+#              #
#    Updated: 2023/11/15 09:25:03 by shaintha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap

CC := cc
CFLAGS := -Wall -Wextra -Werror -g

SRCS := push_swap.c ./sorting/utils.c ./sorting/sort_stacks.c ./sorting/sort_types.c ./operations/op_swap.c ./operations/op_push.c ./operations/op_rotate.c ./operations/op_reverse_rotate.c

OBJS := $(SRCS:.c=.o)

.SILENT:

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	cd Libft/ && make -s
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) ./Libft/libft.a

clean:
	rm -rf $(OBJS)
	cd Libft/ && make -s clean

fclean: clean
	rm -rf $(NAME)
	cd Libft/ && make -s fclean

re: fclean all

.PHONY: all clean fclean re