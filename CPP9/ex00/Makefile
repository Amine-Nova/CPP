NAME = btc

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp

OBJ = ${SRCS:.cpp=.o}

all : $(NAME)

%.o : %.c BitcoinExchange.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean
