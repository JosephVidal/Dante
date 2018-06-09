/*
** EPITECH PROJECT, 2018
** perfect.c
** File description:
** perfect
*/

#include "my.h"

void display(char **maze, int x)
{
	int i = 0;

	for (; i < x - 1; i++)
		my_printf("%s\n", maze[i]);
	my_printf("%s", maze[i]);
	my_free_tab(maze);
}

void perfect(char **maze, int x, int y)
{
	int i = 0;
	time_t *my_time = malloc(sizeof(time_t));

	time(my_time);
	srandom((unsigned long int)my_time);
	free(my_time);
	while (i != x) {
		perfect_paire(maze, i, x, y);
		if ((i + 1) == x)
			i++;
		else
			i += 2;
	}
	display(maze, x);
}

void perfect_paire(char **maze, int i, int x, int y)
{
	if (x % 2 != 0 && y % 2 != 0)
		init_maze(maze, i, x, y);
	if (x % 2 == 0 && y % 2 != 0)
		init_up(maze, i, x, y);
	if (y % 2 == 0 && x % 2 != 0)
		init_left(maze, i, x, y);
	if (x % 2 == 0 && y % 2 == 0)
		init_leftup(maze, i, x, y);
}
