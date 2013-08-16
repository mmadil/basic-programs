/* CS 50 - Time for Change
 *
 * quarters - 25c
 * dimes -    10c
 * nickels -   5c
 * pennies -   1c
 *
 */

#include <stdio.h>

int main()
{
  float f;
  int coins = 0, quarters = 25, dimes = 10, nickels = 5, pennies = 1;
  printf("O hai! o/ \n");
  printf("How much change is owed ?\n");
  scanf("%f", &f);
  int change = f * 100;

x:
  if(change - quarters >= 0)
  {
    change = change - quarters;
    coins++;
    goto x;
  }
  if(change - dimes >= 0)
  {
    change = change - dimes;
    coins++;
    goto x;
  }
  if(change - nickels >= 0)
  {
    change = change - nickels;
    coins++;
    goto x;
  }
  if(change - pennies >= 0)
  {
    change = change - pennies;
    coins++;
    goto x;
  }

  printf("%d\n", coins);
  return 0;
}
