# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 18:01:57 by juan-anm          #+#    #+#              #
#    Updated: 2024/02/22 00:22:42 by juan-anm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZOMBIE

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

INCLUDES = Zombie.hpp

OBJS = $(SRCS:.cpp=.o)

CC = c++ -Wextra -Wall -Werror -std=c++98 ##-fsanitize=address -g

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean	
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #