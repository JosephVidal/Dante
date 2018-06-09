/*
** EPITECH PROJECT, 2017
** my_strcmp
** File description:
** my_strcmp
*/

#include <stdbool.h>

int my_strlen(char const *);

bool my_strcmp(char const *s1, char const *s2)
{
	for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		if (s1[i] != s2[i])
			return (false);
	return (true);
}
