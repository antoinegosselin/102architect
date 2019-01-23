/*
** EPITECH PROJECT, 2018
** do_reflection.c
** File description:
** -r operations
*/

#include <stdio.h>
#include <math.h>
#include "my.h"
#include "architect.h"

float **do_reflection(float **matrix, int degree, int blank)
{
    float **reflection = init_matrix();
    float angle = (MY_PI / 180) * degree;

    //printf("Reflection over an axis with an ");
    //printf("inclination angle of %d degrees\n", degree);
    reflection[0][0] = cos(2 * angle);
    reflection[0][1] = sin(2 * angle);
    reflection[1][0] = sin(2 * angle);
    reflection[1][1] = -cos(2 * angle);
    reflection = do_mul(matrix, reflection);
    blank++;
    return (reflection);
}