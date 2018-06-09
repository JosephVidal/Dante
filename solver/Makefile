##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

SRC	=	src/main.c	\
		src/get_map.c	\
		src/verif_map.c	\
		src/solver.c	\
		src/check_around.c \
		src/check_parameter.c \

NAME	=	solver

OBJ	=       $(SRC:.c=.o)

CFLAGS	=	-W -Wall -Werror -Wextra -I include/ -L lib/ -fdiagnostics-color=always -g3

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
