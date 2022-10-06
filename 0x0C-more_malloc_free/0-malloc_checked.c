#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: amount of bytes
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
char *l;
l = malloc(b);
if (l == NULL) exit(98);
return (l);
}
