#include "main.h"
/**
 *  _strchr - function that locates a character in a string.
 *  @s: String of a data
 *  @c: Character to search 
 *  Return: the first occurrence of the character c in the string s 
 */ 
char *_strchr(char *s, char c)
{ 
while (*s != '\0')
{
if (*s == c)
{
return (s);
} 
++s; 
} 
if (*s == c) 
{
return (s);
}
return (0);
}
