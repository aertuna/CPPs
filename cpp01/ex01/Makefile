# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/12 13:23:13 by aertuna           #+#    #+#              #
#    Updated: 2025/01/25 13:45:35 by aertuna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ZombieHorde

CC		= 	g++
CFLAGS	= 	-Wall -Wextra -Werror -std=c++98 -pedantic
SRC		=	Zombie.cpp main.cpp ZombieHorde.cpp
OBJ		= 	$(SRC:%.cpp=%.o)
all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $^ -o $@
%.o: %.cpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJ)

fclean: 	clean
			rm -rf $(NAME)

re:			fclean all

.PHONY: 	all re clean fclean
