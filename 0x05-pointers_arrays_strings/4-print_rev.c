#include <stdio.h>
/**
*print_rev - function that prints a string in reverse
*@s : string to be printed
*return : void
*/
void print_rev(char *s)
{
int b = 0;
while (s[b] != '\0')
{
b++;
}
for (b -= 1; b >= 0; b--)
{
putchar(s[b]);
}
{
putchar('\n');
}
}
