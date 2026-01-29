# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/07 15:52:04 by anezkahavra       #+#    #+#              #
#    Updated: 2025/11/05 16:53:41 by anezkahavra      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
SRC = main.cpp\
		Zombie.cpp\
		zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror
#VAL_FLAGS = -fsanitize=address,undefined -g
CPP_FLAGS = -std=c++98
#LIBS = s

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(CPP_FLAGS) $(VAL_FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) $(CPP_FLAGS) $(VAL_FLAGS) -c $< -o $@


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
