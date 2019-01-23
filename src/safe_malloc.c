/*
** EPITECH PROJECT, 2018
** safe_malloc.c
** File description:
** Malloc our string, check the return of the malloc, and return the string
*/

#include <stdlib.h>
#include "my.h"

float **safe_malloc_float_array(long long size)
{
    float **var = malloc(sizeof(float *) * size);

    if (var == 0)
        exit(84);
    return (var);
}

float *safe_malloc_float(long long size)
{
    float *var = malloc(sizeof(float) * size);

    if (var == 0)
        exit(84);
    return (var);
}

int *safe_malloc_int(long long size)
{
    int *var = malloc(sizeof(int) * size);

    if (var == 0)
        exit(84);
    return (var);
}