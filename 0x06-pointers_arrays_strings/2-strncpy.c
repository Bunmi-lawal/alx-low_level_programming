#include <stdio.h>
#include <string.h>
/**
 * _strncpy - function that copies a string
 * @dest : destination value
 * @src : source value 
 * @n : the limit of the concatenation
 * return : A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int c = 0, d = 0;
while (src[d])
{
d++;
}
while (c < n && src[c])
{
dest[c] = src[c];
c++;
}
while (c < n)
{
dest[c] = '\0';
c++;
}
return (dest);
}
