
SRC = main.cpp Replace.cpp

OBJ = ${SRC:.cpp=.o}

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

HEADERS = Replace.hpp

NAME = replace

all : ${NAME}

${NAME} : ${OBJ} ${HEADERS}
	${CC} ${CPPFLAGS} ${OBJ} -o ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all