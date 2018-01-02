#include <stdio.h>
#define PRE 22.25
#define MID 19.75
#define LOW 17.50

double getRate();
void getCost(int days, double rate, double *amount);

int main()
{
  int days;
  double rate;
  double amount;

  printf("Please enter the number of days: ");
  scanf("%d", &days);
 
  rate = getRate();
  if(rate)
  {
    getCost(days, rate, &amount);
    printf("debug: %d\n", __LINE__);
    printf("The cost of the stay is: $%.2lf\n",amount);
  }
  return 0;
}

double getRate()
{
  char x;
  double rate;

  printf("Please select the rate of site (A-Premium, B-Middle, C-Low, Q-Quit): ");
  scanf(" %c", &x);

  printf("debug: %c\n", x);
  
  if(x == 'A')
  {
    rate = PRE;
    printf("debug: %d\n", __LINE__);
  }
  else if(x == 'B')
  {
    rate = MID;
  }
  else if(x == 'C')
  {
    rate = LOW;
  }
  else
  {
    rate = 0;
  }
  return rate;
}

void getCost(int days, double rate, double *amount)
{
  printf("debug: %d\n", __LINE__);
  *amount = days * rate;
}
