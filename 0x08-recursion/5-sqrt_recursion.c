#include "main.h"
/**
 * actual_sqrt_recursion - find the square root of two numbers
 * @b: The number
 * @c: The number to test for the square root of @b
 * Return: square root
 */
int actual_sqrt_recursion(int b, int c)
{
if (c * c > b)
return (-1);
else if (c * c == b)
return (c);
else
return (actual_sqrt_recursion(b, c + 1));
return (1);
}

/**
 * _sqrt_recursion - it returns the natural square root of a number
 * @n : integer to be returned
 * return : - the square root of @n
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (actual_sqrt_recursion(n, 1));
}
