#include <stdio.h>
/**
 * rot13 - encode string using rot13
 * @s : pointer
 * return : string
 */
char *rot13(char *s)
{
int a = 0, b;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
while (*(s + a) != '\0')
{
for (b = 0; b < 52; b++)
{
if (*(s + a) == alphabet[b])
{
*(s + a) = rot13[b];
break;
}
}
a++;
}
return (s);
}
