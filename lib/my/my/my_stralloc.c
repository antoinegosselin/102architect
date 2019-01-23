/*
** EPITECH PROJECT, 2018
** my_stralloc.c
** File description:
** Allocates a char *, then adds '\0's everywhere
*/

#include <stdlib.h>

char *my_stralloc(int size)
{
    char *str = malloc(sizeof(char) * size);

    for (int i = 0; i < size; i++)
        str[i] = '\0';
    return (str);
}