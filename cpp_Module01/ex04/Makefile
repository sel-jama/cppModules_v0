
SRC = main.cpp Replace.cpp

OBJ = main.o Replace.o

CC = c++

CFLAGS = -Wall -Wextra -Werror

all : ${OBJ}
	${CC} ${CFLAGS} ${OBJ}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf a.out

re: fclean all