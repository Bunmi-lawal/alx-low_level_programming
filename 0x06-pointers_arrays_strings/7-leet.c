#include <stdio.h>
/**
 * leet - function that encodes a string into 1337
 * @s : pointer to a string
 * return : a string
 */
char *leet(char *s)
{
int a = 0, b = 0, c = 5;
char letter[5] = {'A', 'E', 'O', 'T', 'L'};
char num[5] = {'4', '3', '0', '7', '1'};
while (s[a])
{
b = 0;
while (b < c)
{
if (s[a] == letter[b] || s[a] - 32 == letter[b])
{
s[a] = num[b];
}
b++;
}
a++;
}
return (s);
}
