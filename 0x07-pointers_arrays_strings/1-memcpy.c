#include <stdio.h>
#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination of data
 * @src: Source of data
 * @n: bytes of the memory 
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n) 
{
unsigned int b;
b = 0; 
while (b < n)
{
*(dest + b) = *(src + b); 
b++; 
} 
return (dest); 
}
