/*
** EPITECH PROJECT, 2018
** find_perso.c
** File description:
** place
*/

#include <unistd.h>
#include "prototypes.h"

place_t find_perso(char **array, char c)
{
	int	x = 0;
	int	y = 0;
	place_t perso = {0, 0};

	while (array[y] != NULL) {
		while (array[y][x] != '\0') {
			if (array[y][x] == c || array[y][x] == 'C') {
				perso.x = x;
				perso.y = y;
				return (perso);
			}
			x++;
		}
		x = 0;
		y++;
	}
	perso.x = -1;
	return (perso);
}
