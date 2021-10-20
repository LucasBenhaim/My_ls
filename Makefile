##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile for do_op
##

SRC	=	sources/my_putstr.c	\
		sources/my_putchar.c	\
		sources/my_put_nbr.c	\
		sources/my_printf.c	\
		sources/my_put_unsigned.c	\
		sources/my_put_ulong.c	\
		sources/wrap_modulo.c	\
		sources/dtoo.c	\
		sources/dtob.c	\
		sources/dtoupperx.c	\
		sources/my_revstr.c	\
		sources/my_strlowcase.c	\
		sources/dtox.c	\
		sources/flag_stro.c	\
		sources/flag_p.c	\
		sources/my_strlen.c	\
		sources/proto_ls.c	\
		sources/my_put_long.c	\
		sources/my_llong.c	\
		sources/my_putstr_error.c	\
		sources/my_strcpy.c	\
		sources/my_strdup.c	\
		sources/simple_ls.c	\
		sources/main.c	\

C_SRC	=	tests/test_my_printf.c

OBJ	=	${SRC:%.c=%.o}

NAME	=	my_ls

C_NAME	=	unit-tests

LIB	=	-L lib/my -lmy

CPPFLAGS=	-I ./include

CRIT_F	=	-I ./include

COV	=	--coverage

CRIT_LIB=	-lcriterion

CFLAGS	=	-Wall -Wextra -W -Werror

CC	=	gcc

all:	${NAME}

${NAME}:	${OBJ}
	${CC} -o ${NAME} ${OBJ} ${Lib}

tests_run:
	${CC} -o ${C_NAME} ${SRC} ${C_SRC} ${CRIT_F} ${COV} ${CRIT_LIB}

clean:
	rm -f ${OBJ}
	rm -f *.gcda && rm -f *.gcno

fclean: clean
	rm -f ${NAME}
	rm -f ${C_NAME}
	rm -f libmy.a

re: fclean all

.PHONY: all clean fclean re
