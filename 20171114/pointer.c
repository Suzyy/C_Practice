#include <stdio.h>

void changeA();
int main()
{
  int a = 10;
  int *b;
  b = &a;
  printf("a is %d\n", a);
  changeA(b);
  printf("now, a is %d\n",a);
  return 0;
}

void changeA(int *b)
{
  *b = *b * 10;
  
}
