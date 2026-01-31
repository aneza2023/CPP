NAME = ex02
SRC = main.cpp

OBJ = $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror
CPP_FLAGS = -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(CPP_FLAGS)  $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) $(CPP_FLAGS)  -c $< -o $@


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
