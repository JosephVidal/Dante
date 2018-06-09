/*
** EPITECH PROJECT, 2018
** imperfect.c
** File description:
** imperfect
*/

#include "my.h"

void imperfect(char **maze, int x, int y)
{
	int i = 0;
	time_t *my_time = malloc(sizeof(time_t));

	if (my_time == NULL)
		return;
	my_time = (void *)time(my_time);
	srandom((unsigned long)my_time);
	for (; i < x; i++)
		init_maze(maze, i, x, y);
	i = 0;
	for (; i < x - 1; i++)
		my_printf("%s\n", maze[i]);
	my_printf("%s", maze[i]);
	my_free_tab(maze);
}
