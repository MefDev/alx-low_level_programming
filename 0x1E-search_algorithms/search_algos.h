#ifndef MY_SEARCH_ALGOS_H
#define MY_SEARCH_ALGOS_H

#include <stddef.h>
#include <stdio.h>
#include <math.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *arr, int left, int right);

#endif
