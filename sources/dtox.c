/*
** EPITECH PROJECT, 2021
** dtox.c
** File description:
** decimal to hexa (in lowercase)
*/

#include <stdarg.h>
#include "my.h"

void dtox(unsigned int nb)
{
    unsigned int temp;
    char hexa[100];

    for (int i = 0; nb != 0; i++) {
        temp = nb % 16;
        if (temp < 10)
            temp += 48;
        else
            temp += 55;
        hexa[i] = temp;
        nb /= 16;
    }
    my_putstr(my_strlowcase(my_revstr(hexa)));
}

void wrap_dtox(va_list ap)
{
    dtox(va_arg(ap, unsigned int));
}
