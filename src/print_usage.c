/*
** EPITECH PROJECT, 2018
** print_usage.c
** File description:
** print how to use the program
*/

#include <stdlib.h>
#include <stdio.h>

void print_usage(void)
{
    dprintf(2, "\nUSAGE\n    ./102architect x y transfo1 arg11 [arg12] ");
    dprintf(2, "[transfo2 arg12 [arg22]] ...\n\nDESCRIPTION\n    x      ");
    dprintf(2, "abscissa of the original point\n    y      ordinate of the ");
    dprintf(2, "original point\n\n    transfo arg1 [arg2]\n    -t i j      ");
    dprintf(2, "translation along vector (i, j)\n    -z m n      scaling by ");
    dprintf(2, "factors m (x-axis) and n (y-axis)\n    -r d        rotation ");
    dprintf(2, "centered in 0 by a d degree angle\n    -s d        reflection ");
    dprintf(2, "over the axis passing through 0 with an inclination\n        ");
    dprintf(2, "        angle of d degrees\n\n");
    exit(84);
}