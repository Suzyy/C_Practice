#include <stdio.h>

void enterData(double monthlySalesAmount[], int size);
void clearInput(double monthlySalesAmount[], int nth);

int main()
{
  int size = 5;
  double monthlySalesAmount[size];
  
  enterData(monthlySalesAmount, size);
  
  printf("\n");
  printf("MONTHLY SALES REPORT (BY STORE NUMBER):\n");
  
  for(int i = 0; i < size; i++)
  {
    printf("Store #%d    $%.2lf\n", i+1, monthlySalesAmount[i]);
  }

  return 0;

}
void enterData(double monthlySalesAmount[], int size)
{
  for(int i = 0; i < size; i++)
  {
    printf("Enter sales amount for store #%d: ", i+1);
    scanf("%lf", &monthlySalesAmount[i]);
  
    clearInput(monthlySalesAmount, i);
  }
}

void clearInput(double monthlySalesAmount[], int nth)
{
  while(!(0 <= monthlySalesAmount[nth]) && (monthlySalesAmount[nth]<= 10000000))
  {
    printf("Invalid sales amount - Enter sales amount for store #%d: ",nth);
    scanf("%lf", &monthlySalesAmount[nth]);
  }
}
      
  
  
    
  
  
  
  
