#include "binary_trees.h"
#include <stdlib.h>

/**
 * tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Size of the tree, or 0 if tree is NULL
 */
static size_t tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + tree_size(tree->left) + tree_size(tree->right));
}

/**
 * get_last_node - Finds the last level-order node in a heap
 * @root: Pointer to the root node
 * @size: Total number of nodes in the heap
 *
 * Return: Pointer to the last node
 */
static heap_t *get_last_node(heap_t *root, size_t size)
{
	size_t mask;
	heap_t *node = root;

	if (!root || size == 0)
		return (NULL);

	/* Find MSB (Most Significant Bit) starting position */
	for (mask = 1; mask <= size; mask <<= 1)
		;
	mask >>= 2;

	/* Traverse tree using binary representation of size */
	while (mask > 0)
	{
		if (size & mask)
			node = node->right;
		else
			node = node->left;
		mask >>= 1;
	}

	return (node);
}

/**
 * heapify_down - Restores the Max Heap property from the root downwards
 * @root: Pointer to the root of the heap
 */
static void heapify_down(heap_t *root)
{
	heap_t *curr = root, *largest = NULL;
	int temp;

	while (curr)
	{
		largest = curr;

		if (curr->left && curr->left->n > largest->n)
			largest = curr->left;

		if (curr->right && curr->right->n > largest->n)
			largest = curr->right;

		if (largest == curr)
			break;

		/* Swap values */
		temp = curr->n;
		curr->n = largest->n;
		largest->n = temp;

		curr = largest;
	}
}

/**
 * heap_extract - Extracts the root node of a Max Binary Heap
 * @root: Double pointer to the root node of the heap
 *
 * Return: Value stored in the root node, or 0 on failure
 */
int heap_extract(heap_t **root)
{
	int extracted_val;
	size_t size;
	heap_t *last_node;

	if (!root || !*root)
		return (0);

	extracted_val = (*root)->n;
	size = tree_size(*root);

	/* If tree has only one node */
	if (size == 1)
	{
		free(*root);
		*root = NULL;
		return (extracted_val);
	}

	/* Get the last node in level-order */
	last_node = get_last_node(*root, size);

	/* Move last node's value to root */
	(*root)->n = last_node->n;

	/* Detach last node from its parent */
	if (last_node->parent->left == last_node)
		last_node->parent->left = NULL;
	else
		last_node->parent->right = NULL;

	free(last_node);

	/* Rebuild the heap */
	heapify_down(*root);

	return (extracted_val);
}
