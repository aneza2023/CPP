# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/04 14:50:36 by anezka            #+#    #+#              #
#    Updated: 2025/11/05 16:54:38 by anezkahavra      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
SRC = main.cpp\
		Fixed.cpp
		

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