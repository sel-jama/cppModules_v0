
SRCS = main.cpp Fixed.cpp

OBJS = ${SRCS:.cpp=.o}

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Fixed

HEADERS = Fixed.hpp

all : ${NAME}

${NAME} : ${OBJS} ${HEADERS}
	${CC} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all
