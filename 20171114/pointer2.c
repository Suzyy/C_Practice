#include <stdio.h>

void swap();
int main()
{
  int a = 10;
  int b = 20;

  printf("a is %d, b is %d\n",a,b);
  swap(&a,&b);
  printf("now, a is %d, b is %d\n",a,b);
  return 0;
}

void swap(int *a1, int *b1)
{
  int a = *a1;
  int b = *b1;
  *a1 = b;
  *b1 = a;
}
  
  
