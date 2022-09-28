#include <stdio.h>
#include "0-memset.c"
/**
* main - Check the code
* Return: Always 0. 
*/ 
int main(void) 
{
char buffer[98] = {0x00}; 
_memset(buffer, 0x01, 95); 
printf("-------------------------------------------------\n"); 
return (0);
}
