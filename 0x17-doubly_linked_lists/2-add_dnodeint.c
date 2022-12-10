#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *dlistint_t - doubly linked list
 *@n: integer
 *@prev: points to the previous node
 *@next: points to the next node
 *Description: doubly linked list node structure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
if (new == NULL)
return NULL;
new->n = n;
new->prev = NULL;
new->next = *head;
if (*head != NULL)
(*head)->prev = new;
*head = new;
return new;
}
