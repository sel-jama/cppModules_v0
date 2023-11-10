SRCS = main.cpp Cat.cpp Dog.cpp Animal.cpp Brain.cpp

OBJS = ${SRCS:.cpp=.o}

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

HEADERS = Animal.hpp Cat.hpp Dog.hpp Brain.hpp

NAME = Animal

all : ${NAME}

${NAME} : ${OBJS} ${HEADERS}
	${CC} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all