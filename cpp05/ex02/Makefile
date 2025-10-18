# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/28 12:38:46 by aertuna           #+#    #+#              #
#    Updated: 2025/02/28 12:38:47 by aertuna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= bureaucrat
CC 		= c++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98 -pedantic
SRCS 	= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJS 	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) home_shrubbery

fclean: clean
	rm -f $(NAME)

re: fclean all
