
SRCS = main.cpp ClapTrap.cpp

OBJS = ${SRCS:.cpp=.o}

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Trap

HEADERS = ClapTrap.hpp

all : ${NAME}

${NAME} : ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all