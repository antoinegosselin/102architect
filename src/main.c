/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main for the 102architect
*/

#include <stdlib.h>
#include "my.h"
#include "my_printf.h"
#include "architect.h"

static int check_arg(char *str)
{
    int len = my_strlen(str);

    if (str[0] == '-' && len > 1 && my_str_isnum(&str[1]))
        return (1);
    else if (my_str_isnum(str))
        return (1);
    else
        return (0);
}

int main(int ac, char **av)
{
    int *point;
    float *point_end;
    float **matrix;

    if (ac < 5 || (ac == 2 && (av[1][0] == '-' && av[1][1] == 'h'))) {
        if (ac != 2)
            my_putstr_err("Not enough arguments\n");
        print_usage();
    }
    if (!check_arg(av[1]) || !check_arg(av[2]))
        print_usage();
    point = init_point(av);
    matrix = architect(ac, av);
    print_actions(ac, av);
    print_matrix(matrix);
    point_end = do_mul_end(matrix, point);
    printf("(%d, %d) =>", point[0], point[1]);
    printf(" (%.2f, %.2f)\n", point_end[0], point_end[1]);
    free(point);
    free(point_end);
    return (0);
}