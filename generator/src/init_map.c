/*
** EPITECH PROJECT, 2018
** init_map.c
** File description:
** init_map
*/

#include "my.h"

void set_position(char **maze, int i, int j, int nb)
{
	if (nb == 0)
		maze[i][j + 1] = '*';
	if (nb == 1)
		maze[i + 1][j] = '*';
}

void init_maze(char **maze, int i, int x, int y)
{
	int j = 0;
	int nb = 0;

	while (j != y) {
		nb = random();
		nb %= 2;
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

void write_map(char **maze, int x, int y)
{
	int i = 0;
	int j = 0;

	while (i != x) {
		while (j != y) {
			maze[i][j] = 'X';
			j++;
		}
		maze[i][j] = '\0';
		j = 0;
		i++;
	}
	maze[i][j] = '\0';
}
