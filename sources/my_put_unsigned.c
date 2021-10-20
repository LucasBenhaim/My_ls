/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** print any int
*/

#include <unistd.h>
#include <stdarg.h>

void my_putchar(char c);

unsigned my_put_unsigned(unsigned nb)
{
    if (nb > 9)
        my_put_unsigned(nb / 10);
    my_putchar((nb % 10) + '0');
    return (0);
}

void wrap_put_unsigned(va_list ap)
{
    my_put_unsigned(va_arg(ap, unsigned));
}
