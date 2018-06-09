/*
** EPITECH PROJECT, 2018
** check_around.c
** File description:
** check around
*/

#include "my.h"
#include "solver.h"

int check_x_o(char **maze, int x, int y, int direction)
{
	if (y > 1 && maze[x][y - 1] == 'o')
		direction = 6;
	if (maze[x + 1][y] == 'o')
		direction = 7;
	if (maze[x][y + 1] == 'o')
		direction = 8;
	return (direction);
}

int check_y_o(char **maze, int x, int y, int direction)
{
	if (y == 0) {
		if (maze[x + 1][y] == 'o')
			direction = 7;
		if (maze[x][y + 1] == 'o')
			direction = 8;
	}
	return (check_x_o(maze, x, y, direction));
}

int check_x(char **maze, int x, int y, int direction)
{
	if (y > 1 && maze[x][y - 1] == '*')
		direction = 2;
	if (maze[x + 1][y] == '*')
		direction = 3;
	if (maze[x][y + 1] == '*')
		direction = 4;
	return (direction);
}

int check_y(char **maze, int x, int y, int direction)
{
	if (y == 0) {
		if (maze[x + 1][y] == '*')
			direction = 3;
		if (maze[x][y + 1] == '*')
			direction = 4;
	}
	return (direction);
}

int check_around(char **maze, int x, int y)
{
	int direction = 0;

	if (x == 0) {
		direction = check_y(maze, x, y, direction);
		direction = check_x(maze, x, y, direction);
		if (direction == 0) {
			direction = check_y_o(maze, x, y, direction);
			direction = check_x_o(maze, x, y, direction);
		}
		return (direction);
	}
	direction = check_direction(maze, x, y, direction);
	if (direction == 0)
		direction = check_o(maze, x, y, direction);
	return (direction);
}
