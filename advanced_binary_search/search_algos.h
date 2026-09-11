#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

void print_array(int *array, size_t low, size_t high);
int recursive_advanced_binary(int *array, size_t low, size_t high, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */