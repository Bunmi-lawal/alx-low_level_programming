#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: long int
 * @index: unsigned int
 * Return: Bit at index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int law = 1;
if (index > sizeof(n) * 8)
{
return (-1);
}
law <<= index;
if (law & n)
return (1);
else
return (0);
}
