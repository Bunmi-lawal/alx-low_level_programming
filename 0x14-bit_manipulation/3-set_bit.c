#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n - long int
 * @index: unsigned int
 * Return: 1 if works -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index < sizeof(n) * 8)
{
*n = *n | (1 << index);
return (1);
}
return (-1);
}
