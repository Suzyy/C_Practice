#include <stdio.h>
int* mySum(int x, int y);
void mySum2(int x, int y);

int main()
{
  int a = 2 ;
  int b = 3 ;
  int* sum;


  sum = mySum (a,b);

  mySum2(1,2);

  printf("%d",*sum);
  return 0;
}


int* mySum(int x, int y)
{
  int xy = x+y;
  int* pxy = &xy;  
  return pxy;
}

void mySum2(int x, int y)
{
  int a=10;
  int b=10;
  int c=10;
  int d=10;
}
