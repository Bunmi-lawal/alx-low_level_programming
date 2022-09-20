#include <stdio.h>
/**
 * _atoi - Function that converts a string to an integer
 * @s: variable to be modified
 * return: an integer
 */
int _atoi(char *s)
{
int b = 0;
unsigned int ben = 0;
int bun = 1;
int liz = 0;
while (s[b])
{
if (s[b] == 45)
{
bun *= -1;
}
while (s[b] >= 48 && s[b] <= 57)
{
liz = 1;
ben = (ben * 10) + (s[b] - '0');
b++;
}
if (liz == 1)
{
break;
}
b++;
}
ben *= bun;
return (ben);
}
