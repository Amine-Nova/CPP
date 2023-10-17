NAME = harlFilter

SRC = main.cpp Harl.cpp

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

OBJ = ${SRC:.cpp=.o}

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all