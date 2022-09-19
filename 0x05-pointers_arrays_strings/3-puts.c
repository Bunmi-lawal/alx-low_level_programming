#include <stdio.h>
/**
* _puts - function that pring a string
* *str : string to be printed
* return: a void answer
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
putchar(*str);
}
{
putchar('\n');
}
}
