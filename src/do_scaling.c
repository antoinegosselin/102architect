/*
** EPITECH PROJECT, 2018
** do_scaling.c
** File description:
** -z operations
*/

#include <stdio.h>
#include "my.h"
#include "architect.h"

float **do_scaling(float **matrix, int axis_x, int axis_y)
{
    float **scaling = init_matrix();

    //printf("Scaling by factors %d and %d\n", axis_x, axis_y);
    scaling[0][0] = axis_x;
    scaling[1][1] = axis_y;
    scaling = do_mul(matrix, scaling);
    return (scaling);
}