/*
** EPITECH PROJECT, 2018
** get_map.c
** File description:
** get map and stock in char **
*/

#include <sys/stat.h>
#include <sys/types.h>
#include "my.h"
#include "solver.h"

char **fill_map(char *map_c, char **map, int len)
{
	int i = 0;
	int len_c = 0;

	for (; map[i]; i++) {
		for (int j = 0; j != len; j++, len_c++)
			map[i][j] = map_c[len_c];
		map[i][len] = '\0';
		len_c++;
	}
	return (map);
}

int len_lign(char *map_c)
{
	int i = 0;
	int nb_line = 0;

	for (; map_c[i] != '\0'; i++)
		if (map_c[i] == '\n')
			nb_line++;
	return (nb_line + 1);
}

char **malloc_map(char *map_c, char **map)
{
	int i = 0;
	int j = 0;
	int nb_line = len_lign(map_c);

	for (; map_c[j] != '\n'; j++);
	if (error_map(j, map_c) == FAILURE)
		return (NULL);
	map = malloc(sizeof(char *) * (nb_line + 1));
	if (!map)
		return (NULL);
	for (; i != nb_line; i++) {
		map[i] = malloc(sizeof(char) * (j + 1));
		if (!map[i])
			return (NULL);
	}
	my_printf("i = %d\n", i);
	map[i] = NULL;
	return (fill_map(map_c, map, j));
}

char **map_to_tab(char *map_c)
{
	char **map = NULL;

	map = malloc_map(map_c, map);
	free(map_c);
	return (map);
}

char **get_map(int fd, char *path)
{
	struct stat sb;
	char *map_c = NULL;

	stat(path, &sb);
	map_c = malloc(sizeof(char) * (sb.st_size + 1));
	if (!map_c || read(fd, map_c, sb.st_size) == -1)
		return (NULL);
	map_c[sb.st_size] = '\0';
	return (map_to_tab(map_c));
}
