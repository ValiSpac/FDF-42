# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpac <vpac@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 16:40:05 by vinograd          #+#    #+#              #
#    Updated: 2022/12/23 09:27:52 by vpac             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FRAEMWORKS=-framework OpenGL -framework AppKit
FLAGS=-Werror -Wextra -Wall -fsanitize=address -g3
NAME=fdf
SRC=src/*.c
INCLUDES=libft/libft.a minilibx/libmlx.a

all:
	@make -C libft/ all
	@make -C minilibx/ all
	gcc $(SRC) -o $(NAME) $(FLAGS) $(INCLUDES) $(FRAEMWORKS)

clean:
	@make -C libft/ clean
	@make -C minilibx/ clean

fclean: clean
	/bin/rm -f $(NAME)
	@make -C libft/ fclean

re: fclean all

push:
	git add .
	git status
	git commit -m fdf
	git push
