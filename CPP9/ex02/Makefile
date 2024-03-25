NAME = PmergeMe

CC = c++

CFLAGS = -Wall -Werror -Wextra #-fsanitize=address -g -std=c++98

SRCS = main.cpp PmergeMe.cpp

OBJ = ${SRCS:.cpp=.o}

all : $(NAME)

%.o : %.c PmergeMe.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean
