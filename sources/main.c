/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main for ls
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/sysmacros.h>
#include "my.h"
#include <pwd.h>
#include <grp.h>

void print_flag_l(struct stat sb, char *str)
{
    struct passwd *pw = getpwuid(sb.st_uid);
    struct group *gr = getgrgid(sb.st_gid);

    print_rights(sb);
    my_printf(". %l ", (long) sb.st_nlink);
    my_printf("%s ", pw->pw_name);
    my_printf("%s ", gr->gr_name);
    my_printf("%v ", (long long) sb.st_size);
    my_printf("%s ", right_time(ctime(&sb.st_mtime)));
    my_printf("%s\n", str);
}

void display_basic(int argc, char **argv)
{
    for (int i = 1; argv[i]; i++) {
        if (argc != 2) {
            my_printf("%s:\n", argv[i]);
            simple_ls(argv[i]);
            my_printf("\n");
        }
        else
            simple_ls(argv[i]);
    }
}

int main(int argc, char **argv)
{
    struct stat sb;

    if (argc == 1)
        simple_ls(".");
    if (argc >= 2 && argv[1][0] != '-')
        display_basic(argc, argv);
    if (argc >= 2 && argv[1][0] == '-' && argv[1][1] == 'l') {
        for (int i = 2; argv[i]; i++) {
            if (lstat(argv[i], &sb) == -1) {
                my_putstr_error("File not found\n");
                return (84);
            }
            print_flag_l(sb, argv[i]);
        }
    }
    return (EXIT_SUCCESS);
}
