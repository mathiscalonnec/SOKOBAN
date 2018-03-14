/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include "prototypes.h"
#include <ncurses.h>

int main (int ac, char **av)
{
	char **array;
	int key;

	if (ac != 2)
		return (84);
	array = open_read(av[1]);
	if (map_valid(array) == 0)
		return (84);
	init_fen();
	while (end_game(array) == 0) {
		clear();
		print_array(array);
		refresh();
		key = getch();
		if (key == 27)
			break;
		events(array, key);
	}
	endwin();
	return (0);
}

void init_fen(void)
{
	initscr();
	curs_set(0);
	keypad(stdscr, TRUE);
}
