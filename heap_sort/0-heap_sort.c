#include "sort.h"

/**
 * swap - Échange deux éléments dans un tableau et affiche le tableau
 * @array: Le tableau complet à afficher
 * @size: La taille totale du tableau
 * @a: Pointeur vers le premier élément
 * @b: Pointeur vers le deuxième élément
 */
void swap(int *array, size_t size, int *a, int *b)
{
	int temp;

	if (a != b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
		print_array(array, size);
	}
}

/**
 * heapify - Reconstruit le max-heap (sift-down)
 * @array: Le tableau
 * @size: La taille totale du tableau (pour print_array)
 * @n: La taille du tas courant (partie non triée)
 * @i: L'index de la racine courante
 */
void heapify(int *array, size_t size, size_t n, size_t i)
{
	size_t largest = i;
	size_t left = 2 * i + 1;
	size_t right = 2 * i + 2;

	if (left < n && array[left] > array[largest])
		largest = left;

	if (right < n && array[right] > array[largest])
		largest = right;

	if (largest != i)
	{
		swap(array, size, &array[i], &array[largest]);
		heapify(array, size, n, largest);
	}
}

/**
 * heap_sort - Trie un tableau d'entiers dans l'ordre croissant (Sift-down)
 * @array: Le tableau à trier
 * @size: La taille du tableau
 */
void heap_sort(int *array, size_t size)
{
	int i;

	if (array == NULL || size < 2)
		return;

	/* 1. Build max heap (Sift-down) */
	for (i = (size / 2) - 1; i >= 0; i--)
		heapify(array, size, size, i);

	/* 2. Extraction du max et tri */
	for (i = size - 1; i > 0; i--)
	{
		swap(array, size, &array[0], &array[i]);
		heapify(array, size, i, 0);
	}
}