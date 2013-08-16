/*
 * CS 50 - Hail, Caesar !
 *
 * c(i) = [(p(i) + key) % 26]
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
  if(argc == 2)
  {
    int i;
    char chr, message[1000];
    int key = atoi(argv[1]);
    if( key > 26)
      key = key % 26;
    printf("Enter you message : ");
    gets(message);
    for(i = 0; i<strlen(message);i++)
    {
      if(isalpha(message[i]))
      {
        if(message[i]>=65 && message[i]<90)
          if((int)message[i] + key > 90)
            chr = ((int)message[i] + key) - 26;
          else
            chr = (int)message[i] + key;
        else if(message[i]>=90 && message[i]<97)
            chr = ((int)message[i] + key )- 26;
        else if(message[i]>=97 && message[i]<122)
          if((int)message[i] + key > 122)
            chr = ((int)message[i] +key ) - 26;
          else
            chr = (int)message[i] + key;
        else if(message[i] >=122)
          chr = ((int)message[i] + key ) -26;
        printf("%c", chr);
      }
      else
          printf("%c", message[i]);
    }
    printf("\n");
  }
  else
  {
    printf("Usage: ./caesar <key>\n");
    printf("Key can be any number. It is used for shifting\n");
    printf("Example : ROT13 - shifts by 13 , ROT26 shifts by 26\n");
    return 1;
  }
  return 0;
}
