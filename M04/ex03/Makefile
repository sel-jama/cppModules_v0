SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp

OBJS = ${SRCS:.cpp=.o}

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror #-fsanitize=address

HEADERS = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

NAME = recap

all : ${NAME}

${NAME} : ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all