# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arsciand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/15 17:01:41 by arsciand          #+#    #+#              #
#    Updated: 2018/09/18 09:52:17 by arsciand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRCS_PATH = ./srcs/
H_PATH = ./includes/

SRC += $(SRCS_PATH)rush02.c
SRC += $(SRCS_PATH)tools.c
OBJ += rush02.o
OBJ += tools.o
H += -I $(H_PATH)

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
GCSUCCES = @echo "\033[33;32m===> Compilation\tSUCCESS"
CLSUCCES = @echo "\033[33;31m===> Cleanup\t\tSUCCESS"
FCLSUCCES = @echo "\033[33;31m===> Force Cleanup\tSUCCESS"
NORME = @echo "\033[33;35m===> Norminette\t\tRUNNING"
NORMEDONE = @echo "\033[33;32m===> Norminette\t\tDONE"

all: $(NAME)

gc:
	@$(CC) -c $(SRC) $(H)
	@$(CC) $(OBJ) -o $(NAME)
	$(GCSUCCES)

norme:
	$(NORME)
	@norminette $(SRC) ./includes/rush02.h
	$(NORMEDONE)

$(NAME):
	@$(CC) $(CFLAGS) $(SRC) $(H)
	@$(CC) $(OBJ) -o $(NAME)
	$(GCSUCCES)

clean:
	@/bin/rm -rf $(OBJ)
	$(CLSUCCES)

fclean:
	@/bin/rm -rf $(OBJ) $(NAME)
	$(FCLSUCCES)

re: fclean norme all clean
