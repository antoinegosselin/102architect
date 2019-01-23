/*
** EPITECH PROJECT, 2018
** free_float_array.c
** File description:
** free the float array
*/

#include <stdlib.h>
#include "my.h"
#include "architect.h"

void make_free(float **array)
{
    for (int i = 0; i < 3; i++)
        free(array[i]);
    free(array);
}