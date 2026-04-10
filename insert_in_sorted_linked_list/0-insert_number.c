#include "lists.h"
#include <stdlib.h>
/**
*insert_node - inserting a new node
*@head: Double pointer to the head
*@number: number to be inserted in the new node
*Return: the address of the new element, or NULL if it failed
*/

listint_t *insert_node(listint_t **head, int number)
{
listint_t *new;
listint_t *current;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = number;
new->next = NULL;

if (*head == NULL || (*head)->n >= number)
{
new->next = *head;
*head = new;
return (new);
}

current = *head;
while (current->next != NULL && current->next->n < number)
current = current->next;

new->next = current->next;
current->next = new;

return (new);
}
