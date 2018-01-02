#include <stdio.h>
#define SIZE 5

double enterData (int i);
void clearInput ();

int main()
{
  double monthlySalesAmount[SIZE];
  int i = 1;
 
  for(i;i <= SIZE; i++)
  {
    enterData(i);


    










 
double enterData(int i)
{
  printf("Enter sales amount for store #%d: ",i);
  scanf("%lf", &monthlySalesAmount[i]);
}
  
void clearInput(
