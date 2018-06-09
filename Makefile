##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

all :
	make -C generator
	make -C solver

clean :
	make clean -C generator
	make clean -C solver
	rm -f *~
	rm -f *#*

fclean : clean
	make fclean -C generator
	make fclean -C solver

re :	fclean all
