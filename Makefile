# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/10 15:26:59 by gahubaul          #+#    #+#              #
#    Updated: 2016/01/06 18:39:05 by rlemarch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


RED=\033[31m
NORMAL=\033[0m
YELLOW=\033[33m

NAME=fillit

FLAG=-Wall -Wextra -Werror

SRC= 	src/check_block.c\
		src/check_error.c\
		src/count.c\
		src/line_column.c\
		src/main.c\
		src/malloc.c\
		src/modif_table.c\
		src/print.c\
		src/resolver.c

OBJ=$(SRC:.c=.o)

all: $(NAME)
	@printf "\r${YELLOW}all${NORMAL}\t=> done\n"

$(NAME): $(OBJ)
	@gcc $(OBJ) -o $(NAME)

%.o: %.c
	@gcc $(FLAG) -o $@ -c $^

clean:
	@rm -f $(OBJ)
	@printf "\r${RED}clean${NORMAL}\t=> done\n"

fclean: clean
	@rm -f $(NAME)
	@printf "\r${RED}fclean${NORMAL}\t=> done\n"

re: fclean all

.PHONY: all clean fclean re
