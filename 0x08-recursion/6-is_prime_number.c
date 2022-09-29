#include "main.h"
/**
 * IsPrime -function that searches if a number is prime
 * @a: the number to check
 * @b: the numbers we will go through
 * Return: a prime number or not
 */
int IsPrime(int a, int b)
{
if (a <= 1 || a % b == 0)
return (0);
else if (a == b)
return (1);
else if (a > b)
IsPrime(a, b + 1);
return (1);
}
/**
 * is_prime_number - function that states if integer n is prime or not
 * @n: the integer
 * Return: 0 if n  is not prime, and 1 if it is
 */
int is_prime_number(int n)
{
return (IsPrime(n, 2));
}
