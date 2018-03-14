/*
** EPITECH PROJECT, 2018
** how_many_char_in_array.c
** File description:
** how_many_char
*/

#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>
#include "prototypes.h"

int how_many_char(char **array, char c)
{
	int i = 0;
	int j = 0;
	int compteur = 0;

	while (array[i] != NULL) {
		while (array[i][j] != '\0') {
			if (array[i][j] == c)
				compteur++;
			j++;
		}
		j = 0;
		i++;
	}
	return (compteur);
}

int map_valid(char **array)
{
	int a = how_many_char(array, 'O');
	int b = how_many_char(array, 'X');

	if (a == b)
		return (1);
	else
		return (0);
}

int end_game(char **array)
{
	int a = how_many_char(array, 'O');
	int b = how_many_char(array, 'C');

	if (a == 0 && b == 0) {
		endwin();
		exit(1);
	}
	else
		return (0);
}
