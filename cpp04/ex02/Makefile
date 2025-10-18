# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/31 12:50:30 by aertuna           #+#    #+#              #
#    Updated: 2025/01/31 16:00:28 by aertuna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ideas
CC		= 	c++
CFLAGS	= 	-Wall -Wextra -Werror -std=c++98
SRC		=	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp AAnimal.cpp
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