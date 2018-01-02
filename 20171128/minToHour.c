#include <stdio.h>

void changeMin();

int main()
{
  int min;
  
  printf("Please enter minutes you would like to convert: ");
  scanf("%d", &min);
  changeMin(min);


}
void changeMin(int min)
{
  int quotient;
  int remainder;

  quotient = min / 60;
  remainder = min % 60;

  printf("%d minutes is %d hours and %d minutes\n", min, quotient, remainder);
}   
