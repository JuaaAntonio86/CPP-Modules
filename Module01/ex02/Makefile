# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 22:07:02 by juan-anm          #+#    #+#              #
#    Updated: 2024/02/22 00:22:02 by juan-anm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = this_is_brain

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++ -Wextra -Werror -Wall -std=c++98

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(OBJS) -o $(NAME)

%.o:%.cpp Makefile
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean	
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #