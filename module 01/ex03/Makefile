# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anezka <anezka@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 22:51:32 by anezka            #+#    #+#              #
#    Updated: 2025/10/29 12:08:02 by anezka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03
SRC = main.cpp\
		HumanA.cpp\
		HumanB.cpp\
		Weapon.cpp\

OBJ = $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror
CPP_FLAGS = -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(CPP_FLAGS) $(VAL_FLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) $(CPP_FLAGS) $(VAL_FLAGS) -c $< -o $@


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)s

re: fclean all