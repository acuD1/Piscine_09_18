# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arsciand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/15 12:56:27 by arsciand          #+#    #+#              #
#    Updated: 2018/09/16 21:05:48 by arsciand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRCS_PATH = ./srcs/
H_PATH = ./includes/

SRC += $(SRCS_PATH)eval_expr.c
SRC += $(SRCS_PATH)base_fct.c
SRC += $(SRCS_PATH)reading.c
SRC += $(SRCS_PATH)parsing.c
SRC += $(SRCS_PATH)list.c
OBJ += eval_expr.o
OBJ += base_fct.o
OBJ += reading.o
OBJ += parsing.o
OBJ += list.o
H += -I $(H_PATH)

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

norme:
	$(NORME)
	norminette $(SRC) ./includes/eval_expr.h

$(NAME):
	$(CC) $(CFLAGS) $(SRC) $(H)
	$(CC) $(OBJ) -o $(NAME)

clean:
	/bin/rm -rf $(OBJ)

fclean:
	/bin/rm -rf $(OBJ) $(NAME)

re: fclean all
