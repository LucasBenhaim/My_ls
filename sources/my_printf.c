/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** fonction my_printf
*/

#include <stdarg.h>
#include "my.h"

static const cpf_t tab[SIZE] = {
    {'c', &wrap_putchar},
    {'s', &wrap_putstr},
    {'i', &wrap_put_nbr},
    {'d', &wrap_put_nbr},
    {'u', &wrap_put_unsigned},
    {'%', &wrap_modulo},
    {'o', &wrap_dtoo},
    {'b', &wrap_dtob},
    {'X', &wrap_dtoupperx},
    {'x', &wrap_dtox},
    {'S', &wrap_flag_stro},
    {'p', &wrap_flap_p},
    {'l', wrap_put_long},
    {'v', wrap_put_ll}
};

void parser(char c, va_list ap)
{
    for (int i = 0; i < SIZE; i++) {
        if (tab[i].c == c)
            tab[i].pf(ap);
    }
    return;
}

void my_printf(char *str, ...)
{
    va_list ap;

    va_start(ap, str);
    for (int i = 0; str[i]; i++) {
        if (str[i] == '%') {
            parser(str[i + 1], ap);
            i++;
        }
        else
            my_putchar(str[i]);
    }
    va_end(ap);
}
