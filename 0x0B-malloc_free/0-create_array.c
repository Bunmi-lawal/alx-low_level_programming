#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of chars
 * @size: size of array
 * @c: char to assign
 * Return:null if size is 0
 */
char *create_array(unsigned int size, char c)
{
char *bun;
unsigned int i;
bun = malloc(sizeof(char) * size);
if (size == 0 || bun == NULL)
return (NULL);
for (i = 0; i < size; i++)
bun[i] = c;
return (bun);
}
