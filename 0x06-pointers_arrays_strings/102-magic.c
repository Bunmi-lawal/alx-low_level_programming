#include <stdio.h>
/**
 * main - entry pont
 * return : 0
 */
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;
/*
 * You are not allowed to use the variable a in your new line of code
 * You are not allowed to modify the variable p
 * You can only write one statement
 * You are not allowed to use ,
 */
*(p + 5) = 98;
 printf("a[2] = %d\n", a[2]);
 return (0);
}