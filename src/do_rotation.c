/*
** EPITECH PROJECT, 2018
** do_rotation.c
** File description:
** -r operations
*/

#include <stdio.h>
#include <math.h>
#include "my.h"
#include "architect.h"

float **do_rotation(float **matrix, int degree, int blank)
{
    float **rotation = init_matrix();
    float angle = (degree * MY_PI) / 180;

    //printf("Rotation by a %d degree angle\n", degree);
    rotation[0][0] = cos(angle);
    rotation[0][1] = -sin(angle);
    rotation[1][0] = sin(angle);
    rotation[1][1] = cos(angle);
    rotation = do_mul(matrix, rotation);
    blank++;
    return (rotation);
}