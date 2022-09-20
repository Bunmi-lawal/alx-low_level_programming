#include <stdio.h>
/**
* rev_string - function that reverses a string
* @s : string to be reversed
* return: void
*/
void rev_string(char *s)
{
int a, b, c;
char *d, temp;
d = s;
while (s[b] != '\0')
{
b++;
}
for (c = 1; c < b; c++)
{
d++;
}
for (a = 0; a < (b / 2); a++)
{
temp = s[a];
s[a] = *d;
*d = temp;
d--;
}
}
