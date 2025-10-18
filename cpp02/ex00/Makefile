# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/26 14:08:04 by aertuna           #+#    #+#              #
#    Updated: 2025/01/26 14:21:26 by aertuna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		float
CC		= 		c++
CFLAGS	= 		-Wall -Wextra -Werror -std=c++98 -pedantic
SRC		=		main.cpp Fixed.cpp
OBJ		= 		$(SRC:%.cpp=%.o)

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				rm -rf $(OBJ)

fclean: 		clean
				rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean
