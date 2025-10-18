# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alperenertuna <alperenertuna@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/17 18:12:43 by aertuna           #+#    #+#              #
#    Updated: 2025/02/26 20:18:51 by alperenertu      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= bureaucrat
CC 		= c++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98 -pedantic
SRCS 	= main.cpp Bureaucrat.cpp Form.cpp
OBJS 	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
