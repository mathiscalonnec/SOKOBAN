/*
** EPITECH PROJECT, 2017
** prototypes.h
** File description:
** proto
*/

typedef struct place
{
	int x;
	int y;
}place_t;

typedef struct co
{
	int a;
	int b;
	int c;
	int d;
}co_t;

void		init_fen(void);
char		**open_read(char *str);
int		how_many_word(char *str, char deli);
int		how_many_char(char **array, char c);
int		map_valid(char **array);
int		end_game(char **array);
char		**my_str_to_array_delim(char *str, char deli);
place_t		find_perso(char **array, char c);

void		events(char **array, int key);
co_t		init_co(int i, int j, int k, int m);
int		can_move(char first, char second);
void		move_p(char **array, place_t *perso, co_t co);
void		move_first(char **array, place_t *perso, co_t co);
void		move_second(char **array, place_t *perso, co_t co);
void		print_array(char **array);
