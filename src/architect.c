/*
** EPITECH PROJECT, 2018
** architect.c
** File description:
** Does what the 102architect project is all about
*/

#include <stdlib.h>
#include "my.h"
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

float **architect(int argc, char **argv)
{
    float **matrix = init_matrix();
    float **change = init_matrix();
    int index = 3;
    int args[2];
    int passed;

    while (index < argc) {
        passed = 0;
        for (int i = 0; i < 4; i++) {
            if (my_strcmp((TRANSF_FUNCS[i]).identifier, argv[index]) == 0) {
                args[0] = 0;
                args[1] = 0;
                for (int j = 0; j < (TRANSF_FUNCS[i]).arg_nb; j++) {
                    if ((index + 1 + j) >= argc || !check_arg(argv[index + 1 + j])) {
                        make_free(change);
                        make_free(matrix);
                        print_usage();
                    }
                    args[j] = atoi(argv[index + 1 + j]);
                }
                matrix = (TRANSF_FUNCS[i]).pointer(matrix, args[0], args[1]);
                index += (TRANSF_FUNCS[i]).arg_nb + 1;
                passed = 1;
                break;
            }
        }
        if (passed == 0) {
            make_free(change);
            make_free(matrix);
            print_usage();
        }
    }
    make_free(change);
    return (matrix);
}