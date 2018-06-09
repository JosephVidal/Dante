/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "my.h"

void init_maze_left(char **maze, int i, int x, int y)
{
	int j = 1;
	int nb = 0;

	while (j != y) {
		nb = random();
		nb = nb % 2;
		maze[i][j] = '*';
		if (i == x - 1)
			nb = 0;
		if (j == y - 1)
			nb = 1;
		set_position(maze, i, j, nb);
		if (maze[i][j + 1] == '\0')
			j++;
		else
			j += 2;
	}
}

void init_left(char ** maze, int i, int x, int y)
{
	int j = 0;

	for (int nb = 0; nb != y; nb++)
		maze[i][j] = 'X';
	maze[0][0] = '*';
	init_maze_left(maze, i, x, y);
}
