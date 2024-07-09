SRCS = main.cpp Cat.cpp Dog.cpp Animal.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp

OBJS = ${SRCS:.cpp=.o}

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

HEADERS = Animal.hpp Cat.hpp Dog.hpp Brain.hpp WrongAnimal.hpp WrongCat.hpp

NAME = Animal

all : ${NAME}

${NAME} : ${OBJS} ${HEADERS}
	${CXX} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all