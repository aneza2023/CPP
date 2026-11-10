NAME = MutantStack
SRC = main.cpp
HEADERS = MutantStack.hpp \
			MutantStack.tpp

OBJ = $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror
CPP_FLAGS = -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(CPP_FLAGS)  $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re