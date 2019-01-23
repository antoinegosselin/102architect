/*
** EPITECH PROJECT, 2018
** print_actions.c
** File description:
** print actions of the architect
*/

#include <stdlib.h>
#include "my.h"
#include "architect.h"

void print_actions(int argc, char **argv)
{
    int index = 3;
    int args[2];

    while (index < argc) {
        for (int i = 0; i < 4; i++) {
            if (my_strcmp((TRANSF_FUNCS[i]).identifier, argv[index]) == 0) {
                args[0] = 0;
                args[1] = 0;
                for (int j = 0; j < (TRANSF_FUNCS[i]).arg_nb; j++)
                    args[j] = atoi(argv[index + 1 + j]);
                if (i == 0)
                    printf("Translation along vector (%d, %d)\n", args[0], args[1]);
                if (i == 1)
                    printf("Scaling by factors %d and %d\n", args[0], args[1]);
                if (i == 2)
                    printf("Rotation by a %d degree angle\n", args[0]);
                if (i == 3) {
                    printf("Reflection over an axis with an ");
                    printf("inclination angle of %d degrees\n", args[0]);
                }
                index += (TRANSF_FUNCS[i]).arg_nb + 1;
                break;
            }
        }
    }
}