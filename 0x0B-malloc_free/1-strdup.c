#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
char *law;
unsigned int i, j;
if (str == NULL)
return (NULL);
for (i = 0;
str[i] != '\0';
i++);
law = (char *)malloc(sizeof(char) * (i + 1));
if (law == NULL)
return (NULL);
for (j = 0; j <= i; j++)
law[j] = str[j];
return (law);
}
