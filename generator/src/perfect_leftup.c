/*
** EPITECH PROJECT, 2018
** perfect_leftup.c
** File description:
** perfect_leftup
*/

#include "my.h"

void init_maze_leftup(char **maze, int i, int x, int y)
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

void init_leftup(char ** maze, int i, int x, int y)
{
	int init = 0;

	for (int j = 0; j != x; j++)
		maze[init][j] = 'X';
	for (int j = 0; j != y; j++)
		maze[init][j] = 'X';
	maze[0][0] = '*';
	maze[1][0] = '*';
	i += 1;
	init_maze_leftup(maze, i, x, y);
}
