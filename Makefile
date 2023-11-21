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

SRCS := push_swap.c operations.c utils.c

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