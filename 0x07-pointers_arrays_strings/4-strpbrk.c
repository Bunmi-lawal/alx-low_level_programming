#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s:string
 * @accept: match for sr1 and str2 
 * Return: string s
 */
char *_strpbrk(char *s, char *accept)
{
int l;
while (*s != '\0') 
{
l = 0;
while (accept[l] != '\0') 
{
if (*s == accept[l]) 
{
return (s);
}
l++; 
}
s++; 
}
return (0);
}
