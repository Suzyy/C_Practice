#include <stdio.h>

int addTriNum(int n);

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

int addTriNum(int n)
{
  int x = 0;
  int sum = 0;

  for(int i = 1; i <= n; i++)
  {
    x = x + i;
    sum = sum + x;
  }
  printf("nth triangular number is %d and the sum of the numbers is %d\n", x, sum);

  return 0;
}
    
  
  

