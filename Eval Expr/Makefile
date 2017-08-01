# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/15 19:36:24 by rkhatri           #+#    #+#              #
#    Updated: 2017/07/16 22:38:21 by rkhatri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

WS = -Wall -Wextra -Werror

SRC = ft_helper.c eval_expr.c main.c

OBJ = ft_helper.o eval_expr.o main.o

all:
	gcc -c $(SRC)
	gcc $(WS) -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
