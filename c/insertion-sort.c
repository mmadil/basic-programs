/*
 * This program illustrates basic insertion sort problem in c.
 *
 */

#include <stdio.h>


void main()
{
  int num;
  int a[100];
  int i,j,key;
  printf("How many numbers would you like to enter ? ");
  scanf("%d",&num);
    for(i = 0; i < num; i++){
      printf("Enter number for index %d : ", i);
      scanf("%d",&a[i]);
    }
  printf("\n\nThe array looks like \n\n");
  for(i=0;i<num;i++){
    printf("%d\n",a[i]);
  }
  printf("\n\nNow the sorted array looks like \n\n");\
    for(j=1; j<=num; j++){
      key = a[j];
      i = j - 1;
      while(i>=0 && a[i]>key){
        a[i+1] = a[i];
        i = i-1;
      }
      a[i+1] = key;
     }
  for(i=0;i<num;i++)
    printf("%d\n",a[i]);
}
