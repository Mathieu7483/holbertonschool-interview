#include "binary_trees.h"

/**
 * avl_check_and_height - Checks AVL validity and computes subtree height
 * @tree: Pointer to the current node
 * @min: Pointer to minimum allowed value (exclusive), or NULL
 * @max: Pointer to maximum allowed value (exclusive), or NULL
 * @height: Output pointer storing the height of the subtree
 *
 * Return: 1 if subtree is a valid AVL tree, 0 otherwise
 */
static int avl_check_and_height(const binary_tree_t *tree,
		const int *min, const int *max, int *height)
{
	int left_h = 0, right_h = 0;
	int left_ok, right_ok;
	int diff;

	if (tree == NULL)
	{
		*height = -1;
		return (1);
	}

	if ((min != NULL && tree->n <= *min) || (max != NULL && tree->n >= *max))
		return (0);

	left_ok = avl_check_and_height(tree->left, min, &(tree->n), &left_h);
	if (!left_ok)
		return (0);

	right_ok = avl_check_and_height(tree->right, &(tree->n), max, &right_h);
	if (!right_ok)
		return (0);

	diff = left_h - right_h;
	if (diff < -1 || diff > 1)
		return (0);

	*height = (left_h > right_h ? left_h : right_h) + 1;
	return (1);
}

/**
 * binary_tree_is_avl - Checks if a binary tree is a valid AVL Tree
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid AVL Tree, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int height = 0;

	if (tree == NULL)
		return (0);

	return (avl_check_and_height(tree, NULL, NULL, &height));
}
