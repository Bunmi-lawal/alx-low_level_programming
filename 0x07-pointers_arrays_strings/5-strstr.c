#include "main.h" 
/** 
 * _strstr - function that locates a substring 
 * @haystack: main str to be examined 
 * @needle: searched in haystack 
 * Return: return 0
 */
char *_strstr(char *haystack, char *needle) 
{
char *str0, *str2;
while (*haystack != '\0')
{
str0 = haystack;
str2 = needle; 
while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
{
haystack++;
str2++; 
}
if (*str2 == '\0')
return (str0); 
haystack = str0 + 1;
}
return (0);
}
