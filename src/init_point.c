/*
** EPITECH PROJECT, 2018
** init_point.c
** File description:
** init the point values
*/

#include <stdlib.h>
#include <string.h>
#include "my.h"
#include "malloc.h"

int *init_point_res(void)
{
    int *point = safe_malloc_int(3);
    return (point);
}

int *init_point(char **av)
{
    int *point = safe_malloc_int(3);
    
    point[0] = atoi(av[1]);
    point[1] = atoi(av[2]);
    point[2] = 1;
    return (point);
}