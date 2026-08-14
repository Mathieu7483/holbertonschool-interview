#include <stdio.h>
#include <stdlib.h>
#include "search.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 *
 * @head: Pointer to the head of the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not
 */
skiplist_t *linear_skip(skiplist_t *head, int value)
{
	skiplist_t *node, *prev;

	if (!head)
		return (NULL);
	node = head;
	/* 1. Parcours de l'express lane */
	while (node->express)
	{
		prev = node;
		node = node->express;
		printf("Value checked at index [%lu] = [%d]\n",
		       node->index, node->n);
		if (node->n >= value)
			break;
	}
	/* 2. Si on est arrivés au bout de l'express lane sans dépasser la valeur */
	if (!node->express && node->n < value)
	{
		prev = node;
		while (node->next)
			node = node->next;
	}
	/* 3. Affichage de la plage de recherche */
	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, node->index);
	/* 4. Parcours linéaire classique */
	node = prev;
	while (node)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       node->index, node->n);
		if (node->n == value)
			return (node);
		if (node->n > value)
			return (NULL);
		node = node->next;
	}
	return (NULL);
}
