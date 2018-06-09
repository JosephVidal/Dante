/*
** EPITECH PROJECT, 2018
** my_print_tab.c
** File description:
** joseph.vidal@epitech.eu
*/

#include <stdio.h>

void my_putstr(char *);
void my_putchar(char);

char *clean_line(char * line)
{
	for (int i = 0; line[i] != '\0'; i++)
		if (line[i] == 'v')
			line[i] = '*';
	return (line);
}

char **clean_tab(char **maze)
{
	for (int i = 0; maze[i] != NULL; i++)
		maze[i] = clean_line(maze[i]);
	return (maze);
}

void my_print_tab(char **tab)
{
	int i = 0;

	tab = clean_tab(tab);
	while (tab[i + 1] != NULL) {
		my_putstr(tab[i]);
		my_putchar('\n');
		i++;
	}
	my_putstr(tab[i]);
}
