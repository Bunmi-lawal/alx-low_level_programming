#include <stdio.h>
#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * *@s: pointer block of memory to fill 
 * @b: value to set *@n: bytes of the memory 
 * Return: dest 
 */
char *_memset(char *s, char b, unsigned int n)
{
int m;
for (m = 0; m < n; m++) 
{ 
*(s + m) = b;
}
return (s); 
}
