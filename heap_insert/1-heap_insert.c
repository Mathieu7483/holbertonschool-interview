#include "binary_trees.h"

/**
 * binary_tree_size - function that calculate the size of the tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
  if (tree == NULL)
    return (0);
  return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * heap_insert - function that inserts a value in Max Binary Heap
 * @root: is a double pointer to the root node of the Heap
 * @value: is the value to store in the node to be inserted
 * Return: pointer to the created node, or NULL on failure
 */
heap_t *heap_insert(heap_t **root, int value)
{
  heap_t *new_node, *parent;
  int size, mask, temp;

  if (root == NULL)
    return (NULL);

  if (*root == NULL)
    return (*root = binary_tree_node(NULL, value));

  size = binary_tree_size(*root) + 1;
  parent = *root;

  mask = 1 << (31 - __builtin_clz(size) - 1);

  while (mask > 1)
  {
    if (size & mask)
      parent = parent->right;
    else
      parent = parent->left;
    mask >>= 1;
  }

  new_node = binary_tree_node(parent, value);
  if (!new_node)
    return (NULL);

  if (size & 1)
    parent->right = new_node;
  else
    parent->left = new_node;

  while (new_node->parent && new_node->n > new_node->parent->n)
  {
    temp = new_node->n;
    new_node->n = new_node->parent->n;
    new_node->parent->n = temp;
    new_node = new_node->parent;
  }

  return (new_node);
}