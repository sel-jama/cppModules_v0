
SRCS = Contact.cpp PhoneBook.cpp

OBJS = ${SRCS:.cpp=.o}

CPPFLAGS = -Wall -Werror -Werror -std=c++98

CC = c++

NAME  = phonebook

HEADERS = PhoneBook.hpp Contact.hpp

all : ${NAME}

${NAME} : ${OBJS} ${HEADERS}
	${CC} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all