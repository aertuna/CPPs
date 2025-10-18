# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/12 13:27:25 by aertuna           #+#    #+#              #
#    Updated: 2025/01/12 14:55:10 by aertuna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	brain

CC		= 	g++
CFLAGS	= 	-Wall -Wextra -Werror -std=c++98 -pedantic

SRC		=	main.cpp	

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

re: 		fclean all

.PHONY: 	all re clean fclean