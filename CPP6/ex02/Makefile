NAME = Base

FLAGS = -Wall -Werror -Wextra -std=c++98 

SRC = main.cpp Base.cpp

CC = c++

OBJ = ${SRC:.cpp=.o}

all : $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $^ -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)
re : fclean all

.PHONY : all clean re fclean