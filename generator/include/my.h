/*
** EPITECH PROJECT, 2018
** my
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>
#include "mylib.h"
#include "struct.h"

extern const int SUCCESS;
extern const int FAILURE;

int get_parameter(int argc, char **argv, map_t *map);
void free_tab(char **tab, int len);
void set_position(char **maze, int i, int j, int nb);
void write_map(char **maze, int x, int y);
void imperfect(char **maze, int x, int y);
void perfect(char **maze, int x, int y);
void perfect_paire(char **maze, int i, int x, int y);
void init_maze(char **maze, int i, int x, int y);
void init_left(char ** maze, int i, int x, int y);
void init_up(char ** maze, int i, int x, int y);
void init_leftup(char ** maze, int i, int x, int y);

#endif //MY_H
