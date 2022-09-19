#include <stdio.h>
/**
* _puts - function that pring a string
* str : string to be printed
*/ Return : void
void _puts(char *str)
{
for (;*str != '\0'; str++)
{
_puchar(*str);
}
{
_putchar('\n');
}
}
