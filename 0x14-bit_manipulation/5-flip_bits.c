#include <stdio.h>
#include "main.h"
/**
 * flip_bits - Num of bits needed to flip to get from one num to another
 * @n : long int
 * @m : unsigned long int
 * return :1 ifit works or -1 if it fails
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int law = 0, index;
index = n ^ m;
{
if (index & 1)
{
law++;
}
index >>= 1;
}
return (law);
}
