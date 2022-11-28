NAME = a.out

SRCS = main.cpp \
	   ClapTrap.cpp \
	   ScavTrap.cpp \
	   FragTrap.cpp \
	   DiamondTrap.cpp

OBJS = ${SRCS:.cpp=.o}

FLAGS = -g -Wall -Wextra -Werror -Wshadow -Wno-shadow
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
