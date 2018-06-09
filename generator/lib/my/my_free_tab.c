/*
** EPITECH PROJECT, 2018
** my_free_tab.c
** File description:
** joseph.vidal@epitech.eu
*/

#include <stdlib.h>

void my_free_tab(char **tab)
{
	for (int i = 0; tab[i] != NULL; i++)
		free(tab[i]);
	free(tab);
}
