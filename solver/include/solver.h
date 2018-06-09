/*
** EPITECH PROJECT, 2018
** solver
** File description:
** solver
*/

#ifndef SOLVER_H_
#define SOLVER_H_

int solver(char **, int, int);
char **get_map(int, char *);
int error_map(int, char *);
char *clean_line(char *);
char **clean_tab(char **);
int check_around(char **, int, int);
int check_direction(char **, int, int, int);
int check_o(char **, int, int, int);
int check_y(char **, int, int, int);
int check_y_o(char **, int, int, int);

#endif
