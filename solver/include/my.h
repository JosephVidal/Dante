/*
** EPITECH PROJECT, 2018
** my
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

extern const int SUCCESS;
extern const int FAILURE;

void my_putchar(char);
int my_putnbr(int);
int my_printf(char const *, ...);
void my_puterr(char const *);
int my_putstr(char const *);
int my_strlen(char const *);
bool my_strcmp(char const *, char const *);
char *my_strcpy(char *, char const *);
char **my_strtwa(char *, char);
void my_print_tab(char **);
void my_free_tab(char **);

#endif
