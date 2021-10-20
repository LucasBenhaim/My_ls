/*
** EPITECH PROJECT, 2021
** otod.c
** File description:
** octal to decimal
*/

#include "my.h"
#include <stdarg.h>

void dtoo(unsigned int nb)
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

void wrap_dtoo(va_list ap)
{
    dtoo(va_arg(ap, unsigned int));
}
