/*
 * C program to find sentences that match a given set of words.
 *
 * Usage : ./greplike <filename> "<pattern>"
 *
 * Caution : This program searches with case sensitivity.
 */

// Header files
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// Macros definitions
#define string char*

// Helper Functions
// Concatenates a string and a character
string charstrcat(string str, char c);


// Initialized file pointer
FILE *fp;

// main starts here
int main(int argc, string argv[])
{
  int i, n;
  if((int)argc == 3)
  {
    // Assuming one sentence can never be bigger than buffer size i.e. 512 characters.
    char buffer[512]=" ";
    char ch;
    string filename = argv[1];
    string pattern = argv[2];
    string found;
    fp = fopen(filename, "r");
    if(fp == NULL)
      exit(1);
    while(1)
    {
      ch = fgetc(fp);
      if(ch == EOF)
        break;
      if(ch != '.')
        charstrcat(buffer, ch);
      if(ch == '.')
      {
        charstrcat(buffer, ch);
        found = strstr(buffer, pattern);
        if(found != NULL)
        {
          printf("%s\n", buffer);
          buffer[0]='\0';
        }
        else
          buffer[0]='\0';
      }
    }
    fclose(fp);
  }
  else
    printf("Usage ./greplike <filename> \"<pattern>\" \nPut multiple words inside \" <pattern> \"\n");

  return 0;
}


// Definition of helper functions
string charstrcat(string str, char c)
{
  string s;
  s = str;
  s = s + strlen(str);
  *s = c;
  s++;
  *s = 0;
  return(str);
}

