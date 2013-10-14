#include <stdio.h>

int main()
{
  unsigned int i = 1;
  char *cptr = (char*)&i;
  if (*cptr != 0)
    printf("This machine is Little Endian.\n");
  else
    printf("This machine is Big Endian.\n");
  return 0;
}

