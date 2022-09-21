#include <stdio.h>
/**
 * _strcat - function that concatenates two strings
 * @dest : variable to be modified
 * @src : variable to be modified
 * return : a string
 */
char *_strcat(char *dest, char *src)
{
int bun = 0, i;
while (dest[bun])
{
bun++;
}
for (i = 0; src[i] != 0; i++)
{
dest[bun] = src[i];
bun++;
}
dest[bun] = '\0';
return (dest)
}
