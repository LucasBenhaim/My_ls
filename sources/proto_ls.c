/*
** EPITECH PROJECT, 2021
** proto_ls.c
** File description:
** reproduce the bootstrap for my_ls
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/sysmacros.h>
#include "my.h"

char *right_time(char *str)
{
    char *rev = my_revstr(str);
    char *new;
    int i = 0;

    for (; rev[i] != ':'; i++);
    i++;
    new = my_revstr(my_strdup(&rev[i]));
    for (i = 0; new[i] != ' '; i++);
    new = my_strdup(&new[i + 1]);
    return (new);
}

void print_rights(struct stat sb)
{
    my_printf( (S_ISDIR(sb.st_mode)) ? "d" : "-");
    my_printf( (sb.st_mode & S_IRUSR) ? "r" : "-");
    my_printf( (sb.st_mode & S_IWUSR) ? "w" : "-");
    my_printf( (sb.st_mode & S_IXUSR) ? "x" : "-");
    my_printf( (sb.st_mode & S_IRGRP) ? "r" : "-");
    my_printf( (sb.st_mode & S_IWGRP) ? "w" : "-");
    my_printf( (sb.st_mode & S_IXGRP) ? "x" : "-");
    my_printf( (sb.st_mode & S_IROTH) ? "r" : "-");
    my_printf((sb.st_mode & S_IWOTH) ? "w" : "-");
    my_printf((sb.st_mode & S_IXOTH) ? "x" : "-");
}
