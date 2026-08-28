#ifndef SORT_H
#define SORT_H

#include <stddef.h>

void print_array(const int *array, size_t size);
void heap_sort(int *array, size_t size);
void heapify(int *array, size_t size, size_t n, size_t i);
void swap(int *array, size_t size, int *a, int *b);

#endif /* SORT_H */
