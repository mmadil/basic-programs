//write a program that will print the song "99 bottles of beer on the wall".
//for extra credit, do not allow the program to print each loop on a new line.

#include <stdio.h>

int i;

int main(void)
{
  for (i = 99; i > 0; i--){
    printf("%d bottles of beer on the wall, %d bottles of beer.  Take one down, pass it around, %d bottles of beer on the wall.\n", i, i, i-1);
    }
  return 0;
}
