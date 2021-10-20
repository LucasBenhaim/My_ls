/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** reverse a string
*/

char    *my_revstr(char *str)
{
    int    i = 0;
    int    j = 0;
    char    t;

    while (str[i])
        i++;
    i -= 1;
    while (j <= i) {
        t = str[j];
        str[j] = str[i];
        str[i] = t;
        i--;
        j++;
    }
    return (str);
}
