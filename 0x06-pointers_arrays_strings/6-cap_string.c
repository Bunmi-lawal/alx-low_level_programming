#include <stdio.h>
/**
 * cap_string - function that capitalizes all words of a string
 * @s : pointer to a string
 * return : char value
 */
char *cap_string(char *s)
{
int bun = 0, i;
int law = 13;
char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};
while (s[bun])
{
i = 0;
while (i < law)
{
if ((bun == 0 || s[bun - 1] == spc[i]) && (s[bun] >= 97 && s[bun] <= 122))
s[bun] -= 32;
i++;
}
bun++;
}
return (s);
}
