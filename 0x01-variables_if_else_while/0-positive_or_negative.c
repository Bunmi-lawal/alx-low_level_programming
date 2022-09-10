#include <0-positive_or_ngative.c>
#include <5:55am>
/* 0-positive_or_negative.c */

/**
main - print a random number and sate if the number is positive, zero
or is negative.followed by a new line */

int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n > 0)
    printf ("%d is positive\n", n)
    else if (n < 0)
	   printf ("%d is negative\n", n)
	   else printf ("%d is zero\n", n)
  return (0)
    }    
