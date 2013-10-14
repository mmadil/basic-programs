/*
 * Count the number of high bits and low bits in a long
 *
 */

// Header files
#include <stdio.h>

// Macro definitions
#define string char*

// Helper Functions

// main starts here
int main(void)
{
  long x, quotient;
  int binary[100], i=1, j, ones=0, zeros=0;
  printf("Please enter a long integer \n");
  scanf("%ld",&x);

  quotient = x;

  // Check for negative numbers
  // Negative numbers have MSB as 1.
  if(quotient < 0)
  {
    quotient = -quotient;
    ones++;
  }

  while(quotient != 0)
  {
    binary[i++] = quotient % 2;
    quotient = quotient / 2;
  }

  for(j=i-1;j>0;j--)
  {
    if(binary[j]==1)
      ones++;
    if(binary[j]==0)
      zeros++;
  }

  printf("\n");
  printf("High bits : %d\n", ones);
  printf("Low bits  : %d\n", (32 - ones - zeros) + zeros);
  printf("\n");
  return 0;
}

