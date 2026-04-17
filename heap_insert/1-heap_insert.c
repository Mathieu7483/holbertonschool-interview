#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the node to measure the size
 *
 * Return: Size of the tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * get_parent - Finds the parent node for the next insertion
 * @root: Pointer to the root of the heap
 * @size: Current size of the heap + 1
 *
 * Return: Pointer to the parent node
 */
heap_t *get_parent(heap_t *root, int size)
{
	int mask;
	heap_t *parent = root;

	mask = 1 << (31 - __builtin_clz(size) - 1);
	while (mask > 1)
	{
		if (size & mask)
			parent = parent->right;
		else
			parent = parent->left;
		mask >>= 1;
	}
	return (parent);
}

/**
 * heap_insert - Inserts a value in Max Binary Heap
 * @root: Double pointer to the root node of the Heap
 * @value: Value to store in the node to be inserted
 *
 * Return: Pointer to the created node, or NULL on failure
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *new, *parent;
	int size, temp;

	if (!root)
		return (NULL);

	if (!(*root))
	{
		*root = binary_tree_node(NULL, value);
		return (*root);
	}

	size = (int)binary_tree_size(*root) + 1;
	parent = get_parent(*root, size);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (size & 1)
		parent->right = new;
	else
		parent->left = new;

	while (new->parent && new->n > new->parent->n)
	{
		temp = new->n;
		new->n = new->parent->n;
		new->parent->n = temp;
		new = new->parent;
	}

	return (new);
}
