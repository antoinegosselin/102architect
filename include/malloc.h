/*
** EPITECH PROJECT, 2018
** malloc.h
** File description:
** safe_malloc functions
*/

#ifndef MALLOC_H
#define MALLOC_H

int *safe_malloc_int(long long size);
float *safe_malloc_float(long long size);
float **safe_malloc_float_array(long long size);

#endif //MALLOC_H