/*
** EPITECH PROJECT, 2021
** dtob.c
** File description:
** decimal to binary
*/

#include <stdarg.h>
#include "my.h"

void dtob(unsigned int nb)
{
    unsigned int binary = 0;
    int i = 1;

    while (nb != 0) {
        binary += (nb % 2) * i;
        nb /= 2;
        i *= 10;
    }
    my_put_nbr(binary);
}

void wrap_dtob(va_list ap)
{
    dtob(va_arg(ap, unsigned int));
}
