/*
** EPITECH PROJECT, 2018
** collisions.c
** File description:
** collisions
*/

#include "prototypes.h"

int can_move(char first, char second)
{
	if (first == '#')
		return (0);
	else if (first == 'X' && second == '#')
		return (0);
	else if (first == 'X' && second == 'X')
		return (0);
	else
		return (1);
}
