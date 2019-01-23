/*
** EPITECH PROJECT, 2018
** architect_globals.c
** File description:
** Contains the global variables necessary for the 102architect
*/

#include "architect.h"

const transformation_t TRANSF_FUNCS[4] = {
    {2, "-t", &do_translation},
    {2, "-z", &do_scaling},
    {1, "-r", &do_rotation},
    {1, "-s", &do_reflection}
};
const float MY_PI = 3.14159265358979323846264338327950288419716939937510;