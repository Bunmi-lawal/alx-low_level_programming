#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *dlistint_t - doubly linked list
 *@n: integer
 *@prev: points to the previous node
 *@next: points to the next node
 *Description: doubly linked list node structur
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
dlistint_t *next;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
