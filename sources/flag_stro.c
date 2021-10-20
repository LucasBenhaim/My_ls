/*
** EPITECH PROJECT, 2021
** flag_S.c
** File description:
** putstr a string but display octal for nonprintable characters
*/

#include <stdarg.h>
#include "my.h"

void octal(unsigned int nb)
{
    unsigned int octal = 0;
    int i = 1;

    while (nb != 0) {
        octal += (nb % 8) * i;
        nb /= 8;
        i *= 10;
    }
    my_put_nbr(octal);
}

void flag_stro(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            if (str[i] < 8) {
                my_putstr("00");
                octal(str[i]);
            }
            if (str[i] >= 8 && str[i] < 64) {
                my_putchar('0');
                octal(str[i]);
            }
        }
        else
            my_putchar(str[i]);
    }
}

void wrap_flag_stro(va_list ap)
{
    flag_stro(va_arg(ap, char *));
}
