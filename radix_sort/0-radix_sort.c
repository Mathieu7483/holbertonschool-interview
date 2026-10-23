#include "sort.h"

/**
 * get_max - Finds the maximum value in an array of integers
 * @array: The array to search
 * @size: Size of the array
 * Return: The maximum integer found
 */
int get_max(int *array, size_t size)
{
	int max = array[0];
	size_t i;

	for (i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}

/**
 * count_sort_radix - A helper function that sorts
 * the array by a specific digit place
 * @array: The array to sort
 * @size: Size of the array
 * @exp: The exponent (1 for units, 10 for tens, 100 for hundreds, etc.)
 */
void count_sort_radix(int *array, size_t size, int exp)
{
	int *output;
	int count[10] = {0};
	size_t i;

	output = malloc(sizeof(int) * size);
	if (!output)
		return;

	/* Store count of occurrences in count[] */
	for (i = 0; i < size; i++)
		count[(array[i] / exp) % 10]++;

	/* Change count[i] so that count[i] contains actual position */
	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	/* Build the output array */
	for (i = size; i > 0; i--)
	{
		output[count[(array[i - 1] / exp) % 10] - 1] = array[i - 1];
		count[(array[i - 1] / exp) % 10]--;
	}

	for (i = 0; i < size; i++)
		array[i] = output[i];

	free(output);
}

/**
 * radix_sort - Sorts an array of integers in ascending order using Radix sort
 * @array: The array to sort
 * @size: Size of the array
 */
void radix_sort(int *array, size_t size)
{
	int max;
	int exp;

	if (!array || size < 2)
		return;

	max = get_max(array, size);

	/* Do counting sort for every digit. Instead of passing digit number, */
	/* exp is 10^i where i is current digit number */
	for (exp = 1; max / exp > 0; exp *= 10)
	{
		count_sort_radix(array, size, exp);
		print_array(array, size);
	}
}
