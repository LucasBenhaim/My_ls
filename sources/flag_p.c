/*
** EPITECH PROJECT, 2021
** flag_p.c
** File description:
** adress pointer
*/

#include <stdarg.h>
#include <inttypes.h>
#include "my.h"

void flag_p(uintptr_t nb)
{
    my_putstr("0x");
    dtox(nb);
}

void wrap_flap_p(va_list ap)
{
    flag_p(va_arg(ap, uintptr_t));
}
