NAME = a.out

SRCS = main.cpp \
	   Dog.cpp \
	   Cat.cpp \
	   Animal.cpp \
	   WrongAnimal.cpp \
	   WrongCat.cpp

OBJS = ${SRCS:.cpp=.o}

FLAGS = -g -Wall -Wextra -Werror -std=c++98
RM = rm -rf
CC = clang++

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: re fclean clean
