/*
** EPITECH PROJECT, 2018
** architect.h
** File description:
** Header file for the 102architect project
*/

#pragma once

void print_usage(void);
float **init_matrix(void);
int *init_point_res(void);
int *init_point(char **av);
void make_free(float **array);
float **init_matrix_result(void);
void print_matrix(float **matrix);
float **architect(int argc, char **argv);
void print_actions(int argc, char **argv);
float *do_mul_end(float **matrix, int *point);
float **do_mul(float **matrix, float **change);
float **do_scaling(float **matrix, int axis_x, int axis_y);
float **do_rotation(float **matrix, int degree, int blank);
float **do_reflection(float **matrix, int degree, int blank);
float **do_translation(float **matrix, int vector_x, int vector_y);

typedef struct transormations_s {
    int arg_nb;
    char *identifier;
    float **(*pointer)(float **, int, int);
} transformation_t;

extern const transformation_t TRANSF_FUNCS[4];
extern const float MY_PI;