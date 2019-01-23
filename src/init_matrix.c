/*
** EPITECH PROJECT, 2018
** init_matrix.c
** File description:
** init the matrix
*/

#include "malloc.h"

float **init_matrix_result(void)
{
    float **matrix = safe_malloc_float_array(3);

    for (int count = 0; count < 3; count++) {
        matrix[count] = safe_malloc_float(3);
        for (int i = 0; i < 3; i++)
            matrix[count][i] = 0;
    }
    return (matrix);
}

float **init_matrix(void)
{
    float **matrix = safe_malloc_float_array(3);

    for (int count = 0; count < 3; count++) {
        matrix[count] = safe_malloc_float(3);
        for (int i = 0; i < 3; i++)
            matrix[count][i] = 0;
    }
    matrix[0][0] = 1;
    matrix[1][1] = 1;
    matrix[2][2] = 1;
    return (matrix);
}