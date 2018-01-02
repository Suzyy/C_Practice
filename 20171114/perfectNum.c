#include <stdio.h>

void testPerfect(int low, int high);

int main()
{
  //int lowLimit;
  //int highLimit;
  //
  //printf("Input lowest search limit of perfect numbers: ");
  //scanf("%d", &lowLimit);

  //printf("Input highest search limit of perfect numbers: ");
  //scanf("%d", &highLimit);
  //
  //testPerfect(lowLimit, highLimit); /* 펑션에서 메인으로 숫자 두개를 돌려줄수 있?*/


  testPerfect(1, 100); /* 펑션에서 메인으로 숫자 두개를 돌려줄수 있?*/
  return 0;
}
  
void testPerfect(int low, int high)
{
  int n = 0;

  printf("The perfect numbers between %d to %d are: \n",low, high);

  for(int x = low; x <= high; x++)
  {
    n = 0;
    //printf("current: %d\n",x);
    for(int i=1; i < x; i++)
    {
      if(x % i == 0)
      {
        //printf(" debug factor: %d\n", i);
        n = n + i;
      }
    }
    //printf("n: %d, x: %d\n",n,x);
    if(n == x)
    { 
      printf("%d ",n);
    }
  }
}
