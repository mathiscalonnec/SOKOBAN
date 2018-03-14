/*
** EPITECH PROJECT, 2018
** print_array.c
** File description:
** print
*/

#include <ncurses.h>

void print_array(char **array)
{
	int i = 0;
	int j = 0;

	while (array[i] != NULL) {
		while (array[i][j] != '\0') {
			if (array[i][j] == 'C')
				printw("P");
			else if (array[i][j] == 'Z')
				printw("X");
				else
				printw("%c", array[i][j]);
			j++;
		}
		printw("\n");
		j = 0;
		i++;
	}
}
