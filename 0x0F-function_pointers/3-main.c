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
int (*oprt)(int, int);
if (argc != 4)
{
printf("Error\n');
exit(98);
}
oprt = get_op_func(law[2]);
if (!oprt)
{
printf("Error\n");
exit(99);
}
printf("%d\n", oprt(atoi(law[1]), atoi(law[3])));
return (0);
}
