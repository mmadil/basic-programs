#include <stdio.h>

int main()
{
  int i,j,k;
  int height;
  int hashes, spaces;
  do {
  printf("Height: ");
  scanf("%d", &height);
  } while(height > 0 && height >= 23 );

  spaces = height - 1;
  hashes = 2;

  for( i = 0 ; i < height; i ++)
  {
    for( j = spaces; j > 0 ; j --)
      printf(" ");
    for (k = 0; k < hashes; k++)
      printf("#");
  spaces--;
  hashes++;
  printf("\n");
  }
  return 0;
}
