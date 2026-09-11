#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the first element of the array
 * @size: Size of the array to print
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
*advanced_binary - function that creates a search for a value in a sorted array
*@array: is a pointer to the first element of the array to search in
*@size: is the number of elements in array
*@value: is the value to search for
*Return: the index of the value
*/

int advanced_binary(int *array, size_t size, int value)
{
	size_t mid;
	int result;

	if (array == NULL || size == 0)
		return (-1);

	print_array(array, size);

	if (size == 1)
	{
		if (array[0] == value)
			return (0);
		return (-1);
	}

	mid = (size - 1) / 2;

	if (array[mid] >= value)
		return (advanced_binary(array, mid + 1, value));

	result = advanced_binary(array + mid + 1, size - mid - 1, value);
	if (result != -1)
		return (result + (int)mid + 1);

	return (-1);
}
