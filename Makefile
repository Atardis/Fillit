# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/10 15:26:59 by gahubaul          #+#    #+#              #
#    Updated: 2016/01/06 18:30:52 by rlemarch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=fillit

FLAG=-Wall -Wextra -Werror

SRC= 1_main2.c error_buff.c line_column.c malloc.c print.c resolver.c \

OBJ=$(SRC:.c=.o)

$(NAME): 
	gcc $(FLAG) -c $(SRC)
	gcc $(OBJ) -L. -lft -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
