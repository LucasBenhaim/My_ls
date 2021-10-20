/*
** EPITECH PROJECT, 2021
** my_putstr_error.c
** File description:
** write a string in the error output
*/

#include "my.h"
#include <unistd.h>

int my_putstr_error(char const *str)
{
    return (write(2, str, my_strlen(str)));
}
