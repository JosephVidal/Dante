##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

SRC	=	src/error.c		\
		src/imperfect.c		\
		src/init_map.c		\
		src/main.c		\
		src/perfect.c		\
		src/perfect_left.c	\
		src/perfect_leftup.c	\
		src/perfect_up.c	\

NAME	=	generator

OBJ	=       $(SRC:.c=.o)

CFLAGS	=	-W -Wall -Werror -Wextra -I include/ -L lib/

all : $(NAME)

$(NAME) : $(OBJ)
	make re -C lib/my
	gcc -o $(NAME) $(OBJ) -L lib/ -lmy

clean :
	make clean -C lib/my
	rm -f *~
	rm -f *#*
	rm -f $(OBJ)

fclean : clean
	make fclean -C lib/my
	rm -f $(NAME)

re :	fclean all
