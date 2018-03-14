/*
** EPITECH PROJECT, 2018
** events.c
** File description:
** events
*/

#include <ncurses.h>
#include "prototypes.h"

void events(char **array, int key)
{
	co_t	co;
	place_t perso = find_perso(array, 'P');

	if (key == KEY_UP) {
		co = init_co(-1, 0, -2, 0);
		move_p(array, &perso, co);
	}
	if (key == KEY_DOWN) {
		co = init_co(1, 0, 2, 0);
		move_p(array, &perso, co);
	}
	if (key == KEY_LEFT) {
		co = init_co(0, -1, 0, -2);
		move_p(array, &perso, co);
	}
	if (key == KEY_RIGHT) {
		co = init_co(0, 1, 0, 2);
		move_p(array, &perso, co);
	}
}

co_t init_co(int i, int j, int k, int m)
{
	co_t co;

	co.a = i;
	co.b = j;
	co.c = k;
	co.d = m;

	return (co);
}
