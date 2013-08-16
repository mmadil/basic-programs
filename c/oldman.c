#include <stdio.h>

char* number_to_words(int num);
char* rhyme(int num);

int main()
{
  int i, num;
  for(i=1; i<=10;i++)
  {
    printf("This old man, he played ");
    printf("%s",number_to_words(i));
    printf("He played knick-knack ");
    printf("%s", rhyme(i));
    printf("Knick-knack paddywhack, give your dog a bone\n");
    printf("This old man came rolling home\n\n");

  }
  return 0;
}

char* number_to_words(int num)
{
  if(num == 1)
    return "one\n";
  if(num == 2)
    return "two\n";
  if(num == 3)
    return "three\n";
  if(num == 4)
    return "four\n";
  if(num == 5)
    return "five\n";
  if(num == 6)
    return "six\n";
  if(num == 7)
    return "seven\n";
  if(num == 8)
    return "eight\n";
  if(num == 9)
    return "nine\n";
  if(num == 10)
    return "ten\n";
}

char* rhyme(int num)
{
  if(num == 1)
    return "on my thumb\n";
  if(num == 2)
    return "on my shoe\n";
  if(num == 3)
    return "on my knee\n";
  if(num == 4)
    return "on my door\n";
  if(num == 5)
    return "on my hive\n";
  if(num == 6)
    return "on my sticks\n";
  if(num == 7)
    return "up in heaven\n";
  if(num == 8)
    return "on my gate\n";
  if(num == 9)
    return "on my spine\n";
  if(num == 10)
    return "once again\n";
}
