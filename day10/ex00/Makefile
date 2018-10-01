# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arsciand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 11:39:20 by arsciand          #+#    #+#              #
#    Updated: 2018/09/18 15:25:05 by arsciand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS_PATH = ./srcs/
H_PATH = ./includes/

SRC += $(SRCS_PATH)ft_putchar.c
SRC += $(SRCS_PATH)ft_putstr.c
SRC += $(SRCS_PATH)ft_strcmp.c
SRC += $(SRCS_PATH)ft_strlen.c
SRC += $(SRCS_PATH)ft_swap.c
OBJ += ft_putchar.o
OBJ += ft_putstr.o
OBJ += ft_strcmp.o
OBJ += ft_strlen.o
OBJ += ft_swap.o
H += -I $(H_PATH)

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
AR = ar rc
RANLIB = ranlib

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) $(H)
	$(AR) $(NAME) $(OBJ)
	$(RANLIB) $(NAME)

clean:
	/bin/rm -rf $(OBJ)

fclean:
	/bin/rm -rf $(OBJ) $(NAME)

re: fclean all
