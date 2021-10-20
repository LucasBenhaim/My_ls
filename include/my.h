/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** header for printf
*/

#ifndef MY_H
#define MY_H

#include <stdarg.h>
#include <inttypes.h>
#include <sys/stat.h>

#define SIZE 15

typedef struct pf_s
{
    char c;
    void (*pf) (va_list ap);
} cpf_t;

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
void my_printf(char *str, ...);
unsigned my_put_unsigned(unsigned nb);
unsigned my_put_ulong(unsigned long nb);
void wrap_putchar(va_list ap);
void wrap_putstr(va_list ap);
void wrap_put_nbr(va_list ap);
void wrap_put_unsigned(va_list ap);
void wrap_modulo(va_list ap);
void dtoo(unsigned int nb);
void wrap_dtoo(va_list ap);
void dtob(unsigned int nb);
void wrap_dtob(va_list ap);
void dtoupperx(unsigned int nb);
void wrap_dtoupperx(va_list ap);
char *my_revstr(char *str);
void dtox(unsigned int nb);
void wrap_dtox(va_list ap);
char *my_strlowcase(char *str);
void flag_stro(char *str);
void wrap_flag_stro(va_list ap);
void flag_p(uintptr_t nb);
void wrap_flap_p(va_list ap);
int my_strlen(char const *str);
long my_put_long(long int nb);
void wrap_put_long(va_list ap);
long long my_put_ll(long long int nb);
void wrap_put_ll(va_list ap);
int my_putstr_error(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
void simple_ls(char const *dirname);
void print_rights(struct stat sb);
char *right_time(char *str);

#endif
