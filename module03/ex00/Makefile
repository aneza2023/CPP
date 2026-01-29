# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/10 15:26:21 by anezkahavra       #+#    #+#              #
#    Updated: 2025/11/10 15:26:23 by anezkahavra      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = ex00
SRC = main.cpp\
		ClapTrap.cpp
		

OBJ = $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror
CPP_FLAGS = -std=c++98

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