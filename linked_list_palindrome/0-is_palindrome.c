#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * reverse_list - Invert a linked list in place
 * @head: First node of the list to reverse
 * Return: Pointer to the new head of the reversed list
 */
listint_t *reverse_list(listint_t *head)
{
listint_t *prev = NULL, *next = NULL;
while (head)
{
next = head->next;
head->next = prev;
prev = head;
head = next;
}
return (prev);
}

/**
 * is_palindrome - check if a singly linked list is a palindrome
 * @head: pointer to pointer of first node of listint_t list
 * Return: 1 if it is a palindrome, 0 if not
 */
int is_palindrome(listint_t **head)
{
listint_t *slow = *head, *fast = *head;
listint_t *second_half, *p1, *p2;
int is_pal = 1;
if (!head || !*head || !(*head)->next)
return (1);

/* 1. Find the middle */
while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
}

/* 2. Invert the 2nd part */
second_half = reverse_list(slow);

/* 3. Compare */
p1 = *head;
p2 = second_half;
while (p2)
{
if (p1->n != p2->n)
{
is_pal = 0;
break;
}
p1 = p1->next;
p2 = p2->next;
}

/* 4. restore the list */
reverse_list(second_half);
return (is_pal);
}
