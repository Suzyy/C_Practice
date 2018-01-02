#include <stdio.h>
 
void addTriNum(int n);

int main()
{
  int nth;
  
  printf("Please enter nth triangular number you would like to add up to: ");
  scanf("%d", &nth);

  if(nth <= 0)
  {
    return 0;
  }
  else
  {
    addTriNum(nth);
  }
  return 0;

}

void addTriNum(int n)
{
  int x = 0;
  int sum = 0;

  printf("The sum of the triangular numbers up to %dth triangular number is: ",n);

  for(int i = 1; i <= n; i++)
  {
    x = x + i;
    sum = sum + x;
    printf(" %d ",x);
    if(i == n)
    {
      printf("= %d\n", sum);
    }
    else
    {
      printf("+");
    }
  }
}
