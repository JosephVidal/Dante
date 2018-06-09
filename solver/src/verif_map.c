/*
** EPITECH PROJECT, 2018
** get_map.c
** File description:
** get map and stock in char **
*/

#include "my.h"

int error_map(int j, char *map_c)
{
	int len = 0;
	int len_line = 0;

	for (; map_c[j] != '\0'; j++, len++) {
		if (map_c[j] == '\n' && len_line == 0)
			len_line = len;
		if (map_c[j] == '\n' && len_line != len)
			return (FAILURE);
		if (map_c[j] == '\n')
			len = 0;
	}
	return (len_line);
}