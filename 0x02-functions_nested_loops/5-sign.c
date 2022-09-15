#include "main.h"
/**
 * print_sign - function to print the sign of a number
 * @n: the int to check
 * Return: 1 for greater than zero, 0 for equal to 0, -1 for less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
}
