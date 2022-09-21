#include <stdio.h>
/**
 * string_toupper - function to change lowercase of a string to uppercase
 * @b: point to sring
 * return : string to uppercase
 */
char *string_toupper(char *b)
{
int m = 0;
while (b[m] != '\0')
{
if (b[m] >= 97 && b[m] <= 122)
{
b[m] -= 32;
}
m++;
}
return (b);
}
