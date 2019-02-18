# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: maberkan <maberkan@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/02/11 11:27:23 by maberkan     #+#   ##    ##    #+#        #
#    Updated: 2019/02/12 10:50:47 by maberkan    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

CC = gcc

NAME = fillit

SRC = ./main.c ft_parce.c ft_nbr_bloc.c ft_nbr_diese.c ft_stock.c ft_resolve.c

LIB = libft/libft.a

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	$(CC) -I includes -o $@ $^ $(LIB) $(FLAGS)

$(LIB):
	make -C libft

%.o: %.c
	 $(CC) -I includes -o $@ -c $< $(FLAGS)

clean:
	make -C libft clean
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(LIB)

re: fclean all
