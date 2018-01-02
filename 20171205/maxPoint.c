#include <stdio.h>

void deterMax(int n1, int n2, int *max);

int main()
{
  int n1;
  int n2;
  int max = 0;

  printf("Please enter the first number: ");
  scanf("%d", &n1);

  printf("Please enter the second number: ");
  scanf("%d", &n2);

  deterMax(n1, n2, &max);

  printf("%d is the maximum number\n", max);

  return 0;
}
  
void deterMax(int n1, int n2, int *max)
{
  if(n1 > n2)
  {
    *max = n1;
  }
  else
  {
    *max = n2;
  }
}
