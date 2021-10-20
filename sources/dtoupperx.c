/*
** EPITECH PROJECT, 2021
** dtoh.c
** File description:
** decimal to hexadecimal
*/

#include <stdarg.h>
#include "my.h"

void dtoupper(unsigned int nb)
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
    my_putstr(my_revstr(hexa));
}

void wrap_dtoupperx(va_list ap)
{
    dtoupper(va_arg(ap, unsigned int));
}
