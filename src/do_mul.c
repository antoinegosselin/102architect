/*
** EPITECH PROJECT, 2018
** do_mul.c
** File description:
** do the matrix multiplication
*/

#include "my.h"
#include "architect.h"
#include "malloc.h"

float *do_mul_end(float **matrix, int *point)
{
    float *result = safe_malloc_float(3);
    result[0] = 0;
    result[1] = 0;
    result[2] = 0;

    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 3; k++)
            result[i] += matrix[i][k] * point[k];
    }
    make_free(matrix);
    return (result);
}

float **do_mul(float **matrix, float **change)
{
    float **result = init_matrix_result();

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                result[i][j] += change[i][k] * matrix[k][j];
            }
        }
    }
    make_free(matrix);
    make_free(change);
    return (result);
}