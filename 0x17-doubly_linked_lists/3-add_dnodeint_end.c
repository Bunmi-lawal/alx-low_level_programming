#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_dnodeint_end - doubly linked list
 *@n: integer
 *@head: points to the previous node
 *Description: doubly linked list node structure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
if (new == NULL)
return NULL;
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return new;
}
dlistint_t *current = *head;
while (current->next != NULL)
current = current->next;
current->next = new;
new->prev = current;
return new;
}
