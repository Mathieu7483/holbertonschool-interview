#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * merge_sub - Merges two sub-arrays in ascending order and prints steps
 * @array: Pointer to the array
 * @left: Starting index of the left sub-array
 * @mid: Middle index separating left and right sub-arrays
 * @right: Ending index (exclusive) of the right sub-array
 * @buff: Temporary buffer for merging
 */
void merge_sub(int *array, size_t left, size_t mid, size_t right, int *buff)
{
	size_t i = left, j = mid, k = 0;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array + left, mid - left);
	printf("[right]: ");
	print_array(array + mid, right - mid);

	while (i < mid && j < right)
	{
		if (array[i] < array[j])
			buff[k++] = array[i++];
		else
			buff[k++] = array[j++];
	}
	while (i < mid)
		buff[k++] = array[i++];
	while (j < right)
		buff[k++] = array[j++];

	for (i = left, k = 0; i < right; i++, k++)
		array[i] = buff[k];

	printf("[Done]: ");
	print_array(array + left, right - left);
}

/**
 * merge_recursive - Implements top-down merge sort recursively
 * @array: Pointer to the array
 * @left: Starting index
 * @right: Ending index (exclusive)
 * @buff: Temporary buffer for merging
 */
void merge_recursive(int *array, size_t left, size_t right, int *buff)
{
	size_t mid;

	if (right - left > 1)
	{
		mid = left + (right - left) / 2;
		merge_recursive(array, left, mid, buff);
		merge_recursive(array, mid, right, buff);
		merge_sub(array, left, mid, right, buff);
	}
}

/**
 * merge_sort - Sorts an array of integers in ascending order using Merge Sort
 * @array: Pointer to the array to sort
 * @size: Size of the array
 */
void merge_sort(int *array, size_t size)
{
	int *buff;

	if (!array || size < 2)
		return;

	buff = malloc(sizeof(int) * size);
	if (!buff)
		return;

	merge_recursive(array, 0, size, buff);
	free(buff);
}
