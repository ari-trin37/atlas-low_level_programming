#ifndef MY_HEADER_H
#define MY_HEADER_H
#include <stdlib.h>
#include <stdio.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#include "3-main.c"
#include "3-op_functions.c"
#include "3-get_op_func.c"
#include "3-calc.h"

#endif
