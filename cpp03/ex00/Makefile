# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/30 14:07:17 by aertuna           #+#    #+#              #
#    Updated: 2025/01/30 14:30:54 by aertuna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	inheritance
CC		= 	c++
CFLAGS	= 	-Wall -Wextra -Werror -std=c++98 -pedantic
SRC		=	main.cpp ClapTrap.cpp
OBJ		= 	$(SRC:%.cpp=%.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJ)

fclean: 		clean
			rm -rf $(NAME)

re: 		fclean all

.PHONY: 	all re clean fclean