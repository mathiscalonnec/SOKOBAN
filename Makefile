##
## EPITECH PROJECT, 2018
## Makefile
## File description:
##
##

SRC_DIR		=	src/

UT_DIR		=	tests/

INCLUDE_DIR	=	include/

SRC_UT	=	$(UT_DIR)tests.c

SRC		=	$(SRC_DIR)str_to_array_delim.c		\
			$(SRC_DIR)events.c			\
			$(SRC_DIR)find_perso.c			\
			$(SRC_DIR)open_read.c			\
			$(SRC_DIR)collisions.c			\
			$(SRC_DIR)move.c			\
			$(SRC_DIR)how_many_char_in_array.c	\
			$(SRC_DIR)print_array.c

SRC_MAIN	=	$(SRC_DIR)main.c

OBJ		=	$(SRC:.c=.o)

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

OBJ_UT		=	$(SRC_UT:.c=.o)

TESTS		=	unit

NAME		=	my_sokoban

CFLAGS		=	-g -Wall -Wextra -I $(INCLUDE_DIR)

LDFLAGS		=	-lncurses

LDFLAGS_UT	=	-lcriterion --coverage -lncurses

all		:	$(NAME)

$(NAME)		:	$(OBJ) $(OBJ_MAIN)
			$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(LDFLAGS)
			rm -f $(OBJ) rm -f $(OBJ_MAIN)

tests_run	:	$(OBJ) $(OBJ_UT)
			$(CC) -o $(TESTS) $(OBJ) $(OBJ_UT) $(LDFLAGS_UT)
			rm -f $(OBJ) rm -f $(OBJ_UT)
			./unit

clean		:
			rm -f $(OBJ) $(OBJ_MAIN) $(OBJ_UT)

fclean		:	clean
			rm -f $(NAME) $(TESTS)

re		:	fclean all

.PHONY		:	all clean fclean
