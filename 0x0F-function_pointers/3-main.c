#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - This function we have two numbers and an operator
 * @argc: length of number
 * @argv : number of arguements
 * return : 0
 */
int main(int argc, char *argv[])
{
int num1, num2;
int (*oprt)(int, int);
char *c = argv[2];
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if ((*c != '+' && *c != '-' && *c != '*' && *c != '/' && *c != '%') ||
*(c + 1) != 0)
{
printf("Error\n");
exit(99);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if ((*c == '/' || *c == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}
oprt = get_op_func(c);
printf("%d\n", oprt(num1, num2));
return (0);
}
