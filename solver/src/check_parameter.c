/*
** EPITECH PROJECT, 2018
** check_parameter.c
** File description:
** check parameter
*/

#include "my.h"
#include "solver.h"

int check_direction(char **maze, int x, int y, int direction)
{
	direction = check_y(maze, x, y, direction);
	if (x > 1 && maze[x - 1][y] == '*')
		direction = 1;
	if (y > 1 && maze[x][y - 1] == '*')
		direction = 2;
	if (maze[x + 1] != NULL && maze[x + 1][y] == '*')
		direction = 3;
	if (maze[x][y + 1] == '*')
		direction = 4;
	return (direction);
}

int check_o(char **maze, int x, int y, int direction)
{
	direction = check_y_o(maze, x, y, direction);
	if (x > 1 && maze[x - 1][y] == 'o')
		direction = 5;
	if (y > 1 && maze[x][y - 1] == 'o')
		direction = 6;
	if (maze[x + 1] != NULL && maze[x + 1][y] == 'o')
		direction = 7;
	if (maze[x][y + 1] == 'o')
		direction = 8;
	return (direction);
}
