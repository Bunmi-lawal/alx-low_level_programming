#include <stdio.h>
/**
 * _strncat - function that concatenates two strings
 * @dest : destination
 * @src : source
 * @n : integer
 * return : pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int bun = 0, c = 0;
while (dest[bun])
{
bun++;
}
while (c < n && src[c])
{
dest[bun] = src [c];
bun++;
c++;
}
dest[bun + n + 1] = '\0';
return (dest);
}
