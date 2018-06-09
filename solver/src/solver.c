/*
** EPITECH PROJECT, 2018
** solver
** File description:
** solver
*/

#include "my.h"
#include "solver.h"

int direction_x_v(int direction, int x)
{
	if (direction == 5)
		x--;
	if (direction == 7)
		x++;
	return (x);
}

int direction_y_v(int direction, int y)
{
	if (direction == 6)
		y--;
	if (direction == 8)
		y++;
	return (y);
}

int direction_x_o(int direction, int x)
{
	if (direction == 1)
		x--;
	if (direction == 3)
		x++;
	return (x);
}

int direction_y_o(int direction, int y)
{
	if (direction == 2)
		y--;
	if (direction == 4)
		y++;
	return (y);
}

int solver(char **maze, int x, int y)
{
	static int direction = 0;

	maze[0][0] = 'o';
	if (maze[x + 1] == NULL && maze[x][y + 1] == '\0')
		return (SUCCESS);
	direction = check_around(maze, x, y);
	if (direction <= 4) {
		x = direction_x_o(direction, x);
		y = direction_y_o(direction, y);
		maze[x][y] = 'o';
	} else {
		maze[x][y] = 'v';
		x = direction_x_v(direction, x);
		y = direction_y_v(direction, y);
	}
	if (maze[x + 1] == NULL && maze[x][y + 1] == '\0')
		return (SUCCESS);
	solver(maze, x, y);
	return (SUCCESS);
}
