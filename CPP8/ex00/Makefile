NAME= Find

SRCS= main.cpp

CC= c++

CFLAGS= -Wall -Werror -Wextra -std=c++98

OBJ= ${SRCS:.cpp=.o}

all : $(NAME)

%.o : %.cpp easyfind.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

clean :
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean


