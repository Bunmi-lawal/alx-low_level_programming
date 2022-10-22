#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: pointer to the addres of head
 * @str: pointer to the string of each new node
 * Return: addres to the new head node
 */
list_t *add_node(list_t **head, const char *str)
{
char *dup;
int len;
list_t *new;
new = malloc(sizeof(list_t));
if (!new)
return (0);
dup = strdup(str);
if (dup == NULL)
{
free(new);
return (NULL);
}
for (len = 0; str[len];)
len++;
new->str = dup;
new->len = len;
new->next = *head;
*head = new;
return (new);
}
