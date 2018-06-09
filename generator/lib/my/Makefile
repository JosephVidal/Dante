##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	my_free_tab.c	\
		my_getnbr.c	\
		my_printf.c	\
		my_put_nbr.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_strcmp.c	\
		my_strlen.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	mv $(NAME) ../

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f ../$(NAME)

re : fclean all
