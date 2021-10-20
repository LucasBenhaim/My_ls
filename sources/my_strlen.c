/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** return the numbers of characters found in a string
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}
