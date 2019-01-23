/*
** EPITECH PROJECT, 2018
** print_matrix.c
** File description:
** print the matrix
*/

#include "my.h"

void print_matrix(float **matrix)
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] >= -0.000001 && matrix[i][j] <= 0.000001)
                matrix[i][j] = 0;
        }
    }
    for (int i = 0; i < 3; i++)
        printf("%-8.2f%-8.2f%.2f\n", matrix[i][0], matrix[i][1], matrix[i][2]);
}