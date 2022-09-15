#include <stdio.h>
#include <5:55am>
/**
 * main - Entry point
 * @n : variable that stores different values
 */

int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n > 0)
	  printf ("%d is positive\n", n)
  else if (n < 0)
	  printf ("%d is negative\n", n)
  else
	  printf ("%d is zero\n", n)
  return (0)
}    
