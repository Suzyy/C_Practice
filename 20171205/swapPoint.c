#include <stdio.h>

void swapNums(int *n1, int *n2, int *n3);

int main()
{
  int n1;
  int n2;
  int n3;

  printf("Please enter the first number: ");
  scanf("%d", &n1);

  printf("Please enter the second number: ");
  scanf("%d", &n2);

  printf("Please entere the third number: ");
  scanf("%d", &n3);

  printf(
  "The value before swapping are :\nelement 1 = %d\nelement 2 = %d\nelement 3 = %d\n\n"
  ,n1,n2,n3);

  swapNums(&n1, &n2, &n3);

  printf("The value after swapping are :\nelement 1 = %d\nelement 2 = %d\nelement 3 = %d\n\n",n1,n2,n3);

  return 0;
}

void swapNums(int *n1, int *n2, int *n3)
{
  int orgN1 = *n1;
  int orgN2 = *n2;
  int orgN3 = *n3;

  *n1 = orgN3;
  *n2 = orgN1;
  *n3 = orgN2;
}

