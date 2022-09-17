#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints numbers except 2 and 4
 * Return: returns nothing
 */
int main(void)
{
print_most_numbers();
return (0);
}
void print_most_numbers(void)
{
for (int n = 0; n < 10; n++)
{
if ((n == 2) || (n == 4))
{
continue;
}
putchar(n);
}
