/*
** EPITECH PROJECT, 2018
** move.c
** File description:
** move
*/

#include "prototypes.h"

void move_p(char **array, place_t *perso, co_t co)
{
	int x = perso->x;
	int y = perso->y;

	if (can_move(array[y][x], array[y + co.a][x + co.b]) == 1) {
		if (array[y][x] == 'P') {
			move_first(array, perso, co);
		}
		if (array[y + co.a][x + co.b] == 'X') {
			move_second(array, perso, co);
		}
		else if (array[y + co.a][x + co.b] == 'O' && array[y][x] == 'P') {
			array[y][x] = ' ';
			array[y + co.a][x + co.b] = 'C';
		}
		else if (array[y + co.a][x + co.b] == 'O' && array[y][x] == 'C') {
			array[y][x] = 'O';
			array[y + co.a][x + co.b] = 'C';
		}
		else if (array[y][x] == 'C') {
			if (array[y + co.a][x + co.b] == ' ') {
				array[y + co.a][x + co.b] = 'P';
				array[y][x] = 'O';
			}
			else if (array[y + co.a][x + co.b] == 'Z' && array[y + co.c][x + co.d] != '#') {
				array[y][x] = 'O';
				array[y + co.a][x + co.b] = 'C';
				array[y + co.c][x + co.d] = 'Z';
	}


		}
	}
}

void move_first(char **array, place_t *perso, co_t co)
{
	int x = perso->x;
	int y = perso->y;

	if (array[y + co.a][x + co.b] == 'Z' && array[y + co.c][x + co.d] == ' ') {
		array[y][x] = ' ';
		array[y + co.a][x + co.b] = 'C';
		array[y + co.c][x + co.d] = 'X';
	}
	if (array[y + co.a][x + co.b] == 'X') {
		if (array[y + co.c][x + co.d] == ' ') {
			array[y + co.c][x + co.d] = array[y + co.a][x + co.b];
			array[y + co.a][x + co.b] = array[y][x];
			array[y][x] = ' ';
		}
	}
	else if (array[y + co.a][x + co.b] == ' ') {
		array[y][x] = ' ';
		array[y + co.a][x + co.b] = 'P';
	}
}

void move_second(char **array, place_t *perso, co_t co)
{
	int x = perso->x;
	int y = perso->y;

	if (array[y + co.c][x + co.d] == 'O') {
		array[y + co.c][x + co.d] = 'Z';
		array[y + co.a][x + co.b] = array[y][x];
		array[y][x] = ' ';
	}
	else if (array[y][x] == 'C') {
		array[y][x] = 'O';
		array[y + co.a][x + co.b] = 'P';
		array[y + co.c][x + co.d] = 'X';
	}
}
