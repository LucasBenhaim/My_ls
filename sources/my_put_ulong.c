/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** print any int
*/

#include <unistd.h>

void my_putchar(char c);

unsigned my_put_ulong(unsigned long nb)
{
    if (nb > 9)
        my_put_ulong(nb / 10);
    my_putchar((nb % 10) + '0');
    return (0);
}
