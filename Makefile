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

SRCS := push_swap.c

OBJS := $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	cd Libft/ && make
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) ./Libft/libft.a

all: $(NAME)

clean:
	rm -rf $(OBJS)
	cd Libft/ && make clean

fclean: clean
	rm -rf $(NAME)
	cd Libft/ && make fclean

re: fclean all

.PHONY: all clean fclean re