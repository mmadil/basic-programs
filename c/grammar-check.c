/*
 * Write a program to check entered string is accepted bt a given 
 * grammar or not
 *
 */

#include <stdio.h>

void main(){
  int i = 0;
  int state = 0;
  char string[20];
  printf("Enter any string : ");
  gets(string);
  printf("\n\nString entered was %s. \n", string);

  while(string[i] != '\0')
  {
    switch(state)
    {
      case 0:
        if(string[i] == 'a')
          state = 1;
        else
          state = 3;
        break;

      case 1:
        if(string[i] == 'a')
          state = 1;
        else if(string[i] == 'b')
          state = 2;
        else
          state = 3;
        break;

      case 2:
        if(string[i] == 'b')
          state = 2;
        else
          state = 3;
        break;
    }
    if(state == 3)
      break;
    i++;
  }
  if(state == 2)
    printf("String was accepted by this grammar. \n\n");
  else
    printf("String was not accepted by this grammar. \n\n");
}

