#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h : head of the linked list nodes
 * return : the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
