##
## Duervak, Project 2021
## myHunter Makefile
## File description:
## I compile all tghe file to compile
##

SRC		=	src/main.cpp		\

OBJ		=	$(SRC:.cpp=.o)

NAME	=	myHunter

all: $(NAME)

$(NAME): $(OBJ)
		g++ -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re