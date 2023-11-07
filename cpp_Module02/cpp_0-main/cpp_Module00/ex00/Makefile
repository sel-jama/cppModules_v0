
SRCS = megaphone.cpp

OBJS = megaphone.o

CFLAGS = -Wall -Wextra -Werror

CC = c++

NAME = megaphone

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all
