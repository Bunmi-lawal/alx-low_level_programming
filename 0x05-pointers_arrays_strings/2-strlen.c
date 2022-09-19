#include <stdio.h>
#include <string.h>
/**
* _strlen - function that returns the length of a string
* @s : srting that counts
* Return : length  of string
*/
int _strlen(char *s)
{
int b;
for (b = 0 ; s[b] != '\0'; s++);
return (b);
}
