# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/01 10:55:03 by anezkahavra       #+#    #+#              #
#    Updated: 2025/11/05 16:53:34 by anezkahavra      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz
SRC = main.cpp\
		newZombie.cpp\
		randomChump.cpp\
		zombie.cpp

OBJ = $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror
#VAL_FLAGS = -fsanitize=address,undefined -g
CPP_FLAGS = -std=c++98
#LIBS = 

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