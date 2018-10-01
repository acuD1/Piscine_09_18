# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arsciand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/18 09:52:41 by arsciand          #+#    #+#              #
#    Updated: 2018/09/18 11:19:45 by arsciand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS_PATH = ./srcs/
H_PATH = ./includes/

SRC += $(SRCS_PATH)ft_do_op.c
SRC += $(SRCS_PATH)ft_op.c
SRC += $(SRCS_PATH)base_fct.c
OBJ += ft_do_op.o
OBJ += ft_op.o
OBJ += base_fct.o
H += -I $(H_PATH)

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
GCSUCCES = @echo "\033[33;32m===> Compilation\tSUCCESS"
CLSUCCES = @echo "\033[33;31m===> Cleanup\t\tDONE"
FCLSUCCES = @echo "\033[33;31m===> Force Cleanup\tDONE"
NORME = @echo "\033[33;35m===> Norminette\t\tRUNNING"
NORMEDONE = @echo "\033[33;32m===> Norminette\t\tDONE"

all: $(NAME)

gc:
	@$(CC) -c $(SRC) $(H)
	@$(CC) $(OBJ) -o $(NAME)
	$(GCSUCCES)

norme:
	$(NORME)
	@norminette $(SRC) ./includes/ft_do_op.h 
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
