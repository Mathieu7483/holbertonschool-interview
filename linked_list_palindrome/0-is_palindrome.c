#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to pointer of head of listint_t list
 * Return: 1 if it is a palindrome, 0 if not
 */
int is_palindrome(listint_t **head)
{   
listint_t *current;
int *array;
int i, j;
int size = 0;
if (head == NULL || *head == NULL)
return (1);
current = *head;
while (current != NULL)
{
size++;
current = current->next;
}
array = malloc(sizeof(int) * size);
if (array == NULL)
return (0);
current = *head;
for (i = 0; i < size; i++)
{
array[i] = current->n;
current = current->next;
}
for (i = 0, j = size - 1; i < j; i++, j--)
{
if (array[i] != array[j])
{
free(array);
return (0);
}
}
free(array);
return (1);
}
