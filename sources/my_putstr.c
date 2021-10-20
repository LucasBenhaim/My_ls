/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** display a string
*/

#include <unistd.h>
#include <stdarg.h>
int my_strlen(char const *str);

int my_putstr(char const *str)
{
    return (write(1, str, my_strlen(str)));
}

void wrap_putstr(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}
