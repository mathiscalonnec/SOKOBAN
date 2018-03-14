/*
** EPITECH PROJECT, 2018
** str_to_array_delim
** File description:
** str_to_array
*/

#include <stdlib.h>
#include <unistd.h>

int how_many_word(char *str, char deli)
{
	int i = 0;
	int a = 0;

	while (str[i] == deli)
		i++;
	if (str[i] != '\0')
		a++;
	while (str[i] != '\0') {
		if (str[i] == deli && str[i + 1] != deli && str[i + 1] != '\0')
			a++;
		i++;
	}

	return (a);
}

char **my_str_to_array_delim(char *str, char deli)
{
	char **output = malloc(sizeof(char *) * (how_many_word(str, deli) + 1));
	int i = 0;
	int a = 0;

	if (output == NULL)
		exit(84);
	while (str[0] != '\0') {
		while (str[i] != deli && str[i] != '\0') {
			i++;
		}
		output[a] = malloc(sizeof(char) * (i + 1));
		if (output[a] == NULL)
			exit(84);
		i = 0;
		while (str[0] != deli && str[0] != '\0') {
			output[a][i] = str[0];
			i++;
			str++;
		}
		output[a][i] = '\0';
		i = 0;
		a++;
		str++;
	}
	return (output);
}
