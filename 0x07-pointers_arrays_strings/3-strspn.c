#include "main.h" 
/**
 * _strspn -function that gets the length of a prefix substring
 * @s: pointer
 * @accept: Contains the list of characters to match the pointer
 * Return: count
 */
unsigned int _strspn(char *s, char *accept) 
{
int b, j;
int count = 0;
char *str1, *str2; str1 = s;
str2 = accept;
b = 0;
while (str1[b] != '\0')
{
j = 0;
while (str2[j] != '\0')
{
if (str2[j] == str1[b]) 
{
count++;
break;
}
j++;
}
if (s[b] != accept[j])
{
break;
}
b++;
}
return (count);
}
