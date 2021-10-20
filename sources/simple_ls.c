/*
** EPITECH PROJECT, 2021
** simple_ls.c
** File description:
** do the basic ls
*/

#include <dirent.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

void simple_ls(char const *dirname)
{
    DIR *dir = opendir(dirname);
    struct dirent *entity;

    if (dir == NULL)
        exit(84);
    entity = readdir(dir);
    if (entity == NULL)
        exit(84);
    while (entity != NULL) {
        if (!(entity->d_name[0] == '.'))
            my_printf("%s  ", entity->d_name);
        entity = readdir(dir);
    }
    my_printf("\n");
    closedir(dir);
}
