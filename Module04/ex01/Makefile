NAME = a.out

SRCS = main.cpp \
	   AWeapon.cpp \
	   PlasmaRifle.cpp \
	   PowerFist.cpp \
	   Character.cpp \
	   Enemy.cpp \
	   RadScorpion.cpp \
	   SuperMutant.cpp

OBJS = ${SRCS:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98
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
