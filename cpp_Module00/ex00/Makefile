
SRCS = megaphone.cpp

OBJS = megaphone.o

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

NAME = megaphone

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
