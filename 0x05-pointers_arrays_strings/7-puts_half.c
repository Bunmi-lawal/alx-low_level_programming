#include <stdio.h>
/**
 * puts_half - function that prints half of a string
 * @str : string to look at
 * return : void
 */
void puts_half(char *str)
{
int i;
int bun;
i = 0;
bun = _strbun(str) -1;
while (i <= bun)
{
putchar(str[i]);
i += 2;
}
{
putchar('\n');
}
}
