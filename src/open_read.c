/*
** EPITECH PROJECT, 2017
** open_read.c
** File description:
** open
*/

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "prototypes.h"

char **open_read(char *str)
{
	char	buffer[10000];
	int	size;
	int	fd = open(str, O_RDONLY);
	char	**output;

	size = read(fd, buffer, 2000);
	buffer[size] = '\0';
	output = my_str_to_array_delim(buffer, '\n');

	return (output);
}
