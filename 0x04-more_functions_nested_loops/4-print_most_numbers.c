#include <stdio.h>
/**
 * print_most_numbers - prints numbers except 2 and 4
 * Return: returns nothing
 */
void print_most_numbers(void)
{
int n;
for (n = 0; n < 10; n++)
{
if ((n == 2) || (n == 4))
{
continue;
}
printf("%d",n);
}
}
int main(void)
{
print_most_numbers();
return (0);
}
