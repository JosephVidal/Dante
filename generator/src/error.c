/*
** EPITECH PROJECT, 2018
** error.c
** File description:
** get error in the parameter
*/

#include "my.h"

int loop_error(char **argv, int i, int len)
{
	while (argv[i][len] != '\0') {
		if (argv[i][len] < '0' || argv[i][len] > '9')
			return (-1);
		len++;
	}
	return (SUCCESS);
}

int get_parameter(int argc, char **argv, map_t *map)
{
	int value = -1;
	int i = 1;
	int len = 0;

	while (i != 2) {
		if (loop_error(argv, i, len) == -1)
			return (-1);
		i++;
	}
	if (argc > 3) {
		value = my_strcmp(argv[3], "perfect\0", value, 1);
		value = my_strcmp(argv[3], "imperfect\0", value, 2);
		map->type = value;
	} else
		map->type = 2;
	return (map->type);
}
