# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/29 16:25:46 by anezkahavra       #+#    #+#              #
#    Updated: 2025/09/30 10:43:08 by anezkahavra      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC = phone_book.cpp

OBJ = $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror
CPP_FLAGS = -std=c++98
#LIBS = s

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(CPP_FLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) $(CPP_FLAGS) -c $< -o $@


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)s

re: fclean all
