
SRCS = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}

CPPFLAGS = -Wall -Wextra -Werror

CC = c++ -std=c++98

NAME = Zombie

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

