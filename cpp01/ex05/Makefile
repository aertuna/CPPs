# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/12 13:38:00 by aertuna           #+#    #+#              #
#    Updated: 2025/01/25 14:21:15 by aertuna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	harl

CC		= 	g++
CFLAGS	= 	-Wall -Wextra -Werror -std=c++98 -pedantic
SRC		=	main.cpp	Harl.cpp 
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