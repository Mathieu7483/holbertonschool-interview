#ifndef BINARY_TREES_H
#define BINARY_TREES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s heap_t;

/* Function prototypes */
heap_t *binary_tree_node(heap_t *parent, int value);
void binary_tree_print(const heap_t *tree);
heap_t *heap_insert(heap_t **root, int value);

#endif /*BINARY_TREES_H*/