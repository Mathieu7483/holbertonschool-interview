#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the first element of the array
 * @low: Starting index of the subarray
 * @high: Ending index of the subarray
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}

/**
 * recursive_advanced_binary - Helper function for advanced binary search
 * @array: Pointer to the first element of the array
 * @low: Starting index of the current subarray
 * @high: Ending index of the current subarray
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not present
 */
int recursive_advanced_binary(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);

	mid = low + (high - low) / 2;

	/* Si on a réduit la recherche à 1 seul élément */
	if (low == high)
	{
		if (array[low] == value)
			return ((int)low);
		return (-1);
	}

	if (array[mid] >= value)
		return (recursive_advanced_binary(array, low, mid, value));

	return (recursive_advanced_binary(array, mid + 1, high, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located (first occurrence), or -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_advanced_binary(array, 0, size - 1, value));
}
