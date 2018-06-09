/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "my.h"

const int SUCCESS = 0;
const int FAILURE = 84;

void choose_map(char **maze, int x, int y, int value)
{
	if (value == 1)
		perfect(maze, x, y);
	if (value == 2)
		imperfect(maze, x, y);
}

int init_map(char **argv, map_t *map)
{
	int y = my_getnbr(argv[1]);
	int x = my_getnbr(argv[2]);
	char **maze = malloc(sizeof(char *) * (x + 2));
	int i = 0;

	if (!maze)
		return (-1);
	maze[x + 1] = NULL;
	while (i != x + 1) {
		maze[i] = malloc(sizeof(char) * (y + 1));
		if (!maze[i])
			return (-1);
		i++;
	}
	write_map(maze, x, y);
	choose_map(maze, x, y, map->type);
	return (SUCCESS);
}

int main(int argc, char **argv)
{
	map_t map;

	if (argc < 3 || argc > 4)
		return (FAILURE);
	if (get_parameter(argc, argv, &map) == -1)
		return (FAILURE);
	if (init_map(argv, &map) == -1)
		return (FAILURE);
	return (SUCCESS);
}
