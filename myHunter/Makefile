##
## Duervak, Project 2021
## myHunter Makefile
## File description:
## I compile all tghe file to compile
##

CPPFLAGS	=	-iquote ./include

SRC			=	src/objectClass/objectConstructor.cpp	\

TEST_SRC	=	unitTest/objectTest/mainObjectTest.cpp	\

OBJ			=	$(SRC:.cpp=.o)

TEST_OBJ	=	$(TEST_SRC:.cpp=.o)

NAME		=	myHunter

TEST_NAME	= 	unit_test

all: $(NAME)

$(NAME): $(OBJ)
		g++ -o $(NAME) $(OBJ)

test: $(OBJ) $(TEST_OBJ)
		g++ -o $(TEST_NAME) $(TEST_OBJ) $(OBJ)

clean:
	rm -rf $(OBJ)
	rm -rf $(TEST_OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(TEST_NAME)

re: fclean all

.PHONY: all clean fclean re