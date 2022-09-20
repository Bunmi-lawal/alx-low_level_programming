#include <stdio.h>
/**
 * puts2 : prints every other character of a string
 * @str : character to be modified
 * return: void
 */
void puts2(char *str)
{
int b;
int c = 0;
while (str[c] != '\0')
{
c++;
}
for (b = 0; b < c; b += 2)
{
putchar(str[b]);
}
putchar('\n');
}
