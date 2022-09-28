#include <stdio.h>
#include "main.h"
/**
 * _memcpy -   copy number bytes form adress "from" to adress "to" 
 * @dest: content is to be copied *@src: Source of data to be copied 
 * @n: bytes of the memory *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n) 
{
unsigned int b; b = 0; 
while (b < n)
{
*(dest + b) = *(src + b); 
b++; 
} 
return (dest); 
}
