#include <stdio.h>

void swap(int *a, int *b);

int main()
{
  int a = 10;
  int b = 100;
  
  swap (&a, &b);
  printf("%d, %d\n",a,b);
  return 0;
}
void swap(int *a, int *b)
{
  int orgA = *a;
  int orgB = *b;
  *a = orgB;
  *b = orgA;
}
  
  
