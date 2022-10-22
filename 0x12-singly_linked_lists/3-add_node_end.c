#include "lists.h"
#include "string.h"
#include <stdlib.h>
/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: pointer to the addres of head
 * @str: pointer to the string of each new node
 * Return: addres to the new head node
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *last;
if (!head)
return (0);
last = *head;
new = malloc(sizeof(list_t));
if (!new)
return (0);
new->str = strdup(str);
new->len = strlen((char *)str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (*head);
}
while (last->next)
last = last->next;
last->next = new;
return (*head);
}
