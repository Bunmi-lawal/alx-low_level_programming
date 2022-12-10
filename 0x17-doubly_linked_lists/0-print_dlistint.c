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
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *current = h;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
count++;
}
return count;
}
