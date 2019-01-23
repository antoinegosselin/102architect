/*
** EPITECH PROJECT, 2018
** do_translation.c
** File description:
** -t operations
*/

#include <stdio.h>
#include "architect.h"
#include "my.h"

float **do_translation(float **matrix, int vector_x, int vector_y)
{
    float **translation = init_matrix();

    //printf("Translation along vector (%d, %d)\n", vector_x, vector_y);
    translation[0][2] = vector_x;
    translation[1][2] = vector_y;
    translation = do_mul(matrix, translation);
    return (translation);
}