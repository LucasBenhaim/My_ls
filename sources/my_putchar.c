/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** putchar
*/

#include <unistd.h>
#include <stdarg.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void wrap_putchar(va_list ap)
{
    my_putchar((char)va_arg(ap, int));
}
