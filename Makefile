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

NAME=fillit

FLAG=-Wall -Wextra -Werror

SRC= 	check.c\
		check_error.c\
		count.c\
		line_column.c\
		main.c\
		malloc.c\
		modif_table.c\
		print.c\
		resolver.c

OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME)

%.o: %.c
	@gcc $(FLAG) -o $@ -c $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
