#include <stdio.h>

void add(int n1, int n2, int *sum);

int main()
{
  int n1;
  int n2;
  int sum = 0;

  printf("Please enter the first number: ");
  scanf("%d", &n1);
  
  printf("Please enter the second number: ");
  scanf("%d", &n2);

  add(n1, n2, &sum);

  printf("The sum of the entered numbers is: %d\n", sum);

  return 0;
}

void add(int n1, int n2, int *sum)
{
  *sum = n1 + n2;
}
  
  
