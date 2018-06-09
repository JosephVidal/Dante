/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include <fcntl.h>
#include "my.h"
#include "solver.h"

const int SUCCESS = 0;
const int FAILURE = 84;

int main(int argc, char **argv)
{
	int fd = 0;
	char **maze = NULL;

	if (argc != 2) {
		my_puterr("USAGE\n\t./solver <maze>\n");
		return (FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		my_puterr("Error: cannot open file\n");
		return (FAILURE);
	}
	maze = get_map(fd, argv[1]);
	if (!maze)
		return (FAILURE);
	solver(maze, 0, 0);
	my_print_tab(maze);
	close(fd);
	my_free_tab(maze);
	return (SUCCESS);
}
