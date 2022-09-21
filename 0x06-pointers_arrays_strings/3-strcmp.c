#include <stdio.h>
/**
 * _strcmp - function that compares two string
 * @s1 - first string
 * @s2 - second string
 * return - a string
 */
int _strcmp(char *s1, char *s2)
{
int bun, i;
bun = 0;
while (s1[bun] == s2[bun] && s2[bun] != '\0')
{
bun++;
}
i = s1[bun] - s2[bun]; 
return (i);
}
