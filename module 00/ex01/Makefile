# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/29 16:25:46 by anezkahavra       #+#    #+#              #
#    Updated: 2025/10/01 10:40:20 by anezkahavra      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC = contact.cpp\
		main.cpp\
		phonebook.cpp

OBJ = $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror
#VAL_FLAGS = -fsanitize=address,undefined -g
CPP_FLAGS = -std=c++98
#LIBS = s

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
