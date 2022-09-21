#include <stdio.h>
/**
 * _strcmp - function that compares two string
 * @s1 - first string
 * @s2 - second string
 * return - a string
 */
int _strcmp(char *s1, char *s2)
{
int bun = 0, i= 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
bun = 1;
break;
}
i++;
}
if (bun == 0)
return 0;
else 
return 1;
}
