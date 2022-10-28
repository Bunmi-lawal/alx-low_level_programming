#include "main.h"
#include <stdio.h>
/**
 * get_endianness - Check the endianess
 * return : void 
 */
int get_endianness(void)
{
int index;
index = 2;
if (index & 1)
{
return (0);
}
return (1);
}
