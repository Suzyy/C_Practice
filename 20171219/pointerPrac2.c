#include <stdio.h>
int* mySum(int x, int y, int* xy);

int main()
{
  int a = 2 ;
  int b = 3 ;
  int* sum;
  int xy;
  int* result;

  sum = &xy;

  result = mySum (a,b,sum);

  printf("%d",*sum);
  return 0;
}

int* mySum(int x, int y, int* xy)
{
  int* xy1 = xy;
  *xy1 = x+y; 
  return xy1;
}

