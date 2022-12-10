#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *dlistint_len - doubly linked list
 *@n: integer
 *@prev: points to the previous node
 *@next: points to the next node
 *Description: doubly linked list node structure
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *current = h;
while (current != NULL)
{
current = current->next;
count++;
}
return count;
}
