NAME = Span

SRCS = main.cpp Span.cpp

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

OBJ = ${SRCS:.cpp=.o}


all : $(NAME)

%.o : %.cpp Span.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean
