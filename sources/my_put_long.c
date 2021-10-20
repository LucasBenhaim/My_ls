/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** print any int
*/

#include <unistd.h>
#include <stdarg.h>

void my_putchar(char c);

long my_put_long(long int nb)
{
    long int n;

    n = nb;
    if (nb < 0) {
        n = nb;
        n *= -1;
        my_putchar('-');
    }
    if (n > 9)
        my_put_long(n / 10);
    my_putchar((n % 10) + '0');
    return (0);
}

void wrap_put_long(va_list ap)
{
    my_put_long(va_arg(ap, long int));
}
