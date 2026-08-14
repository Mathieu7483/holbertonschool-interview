#include <stdlib.h>
#include "search.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 *
 * @head: Pointer to the head of the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *head, int value)
{
  skiplist_t *node, *prev;

  if (!head)
    return (NULL);

  for (node = head; node->express && node->express->n < value; node = node->express)
    {
      printf("Value checked at index [%lu] = [%d]\n", node->express->index, node->express->n);
    }

  prev = node;
  if (node->express)
    {
      node = node->express;
      printf("Value found between indexes [%lu] and [%lu]\n", prev->index, node->index);
    }
  else
    {
      while (node->next)
  {
    node = node->next;
  }
      printf("Value found between indexes [%lu] and [%lu]\n", prev->index, node->index);
    }

  for (node = prev; node && node->n < value; node = node->next)
    {
      printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
    }

  if (node && node->n == value)
    return (node);

  return (NULL);
}
