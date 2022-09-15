#include "main.h"
/**
 * print_last_digit - function that print last digit of a number
 * @b: number to be targeted
 * Return: value of the last digit
 */
int print_last_digit(int b)
{
int lastdigit = b % 10;
if (lastdigit < 0)
lastdigit *= -1;
_putchar (lastdigit + '0');
return (lastdigit);
}
