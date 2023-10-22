
SRCS = Contact.cpp PhoneBook.cpp

OBJS = ${SRCS:.cpp=.o}

CFLAGS = -Wall -Werror -Werror

CC = c++

NAME  = phonebook

all = ${NAME}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean ${NAME}