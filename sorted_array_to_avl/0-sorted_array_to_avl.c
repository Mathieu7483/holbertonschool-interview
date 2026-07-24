#include "binary_trees.h"

/* Prototype de la fonction auxiliaire */
avl_t *sorted_array_to_avl_helper(int *array, int start, int end);

/**
 * sorted_array_to_avl - Builds an AVL tree from a sorted array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 *
 * Return: Pointer to the root node of the created AVL tree, or NULL on failure
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return (NULL);

	return (sorted_array_to_avl_helper(array, 0, (int)size - 1));
}

/**
 * sorted_array_to_avl_helper - Recursive helper to build the AVL tree
 * @array: Pointer to the array
 * @start: Starting index
 * @end: Ending index
 *
 * Return: Pointer to the created node, or NULL
 */
avl_t *sorted_array_to_avl_helper(int *array, int start, int end)
{
	int mid;
	avl_t *node;

	if (start > end)
		return (NULL);

	mid = (start + end) / 2;

	node = malloc(sizeof(avl_t));
	if (node == NULL)
		return (NULL);

	node->n = array[mid];
	node->parent = NULL;
	node->left = sorted_array_to_avl_helper(array, start, mid - 1);
	node->right = sorted_array_to_avl_helper(array, mid + 1, end);

	if (node->left != NULL)
		node->left->parent = node;
	if (node->right != NULL)
		node->right->parent = node;

	return (node);
}
