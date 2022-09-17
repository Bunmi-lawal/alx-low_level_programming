#include <stdio.h>
/**
 * print_most_numbers - prints numbers except 2 and 4
 * Return: returns nothing
 */
void print_most_numbers(void)
{
//Write the Character to stdout	
for(char ch = '0'; ch <= '9'; ch++)
{
if(ch == '2' || ch == '4')
{
continue;
}
putchar(ch);
}
putchar('\n');
}
int main (void)
{
print_most_numbers();
return (0);
}
