#include <stdio.h>

void selection(double sales);

int main(){

  double sales;
  
  printf("Please enter sales amount: ");
  scanf("%lf", &sales);

  while (sales <= 0){
    printf("Value must be greater than zero...\n");
    printf("Please enter sales amount: ");
    scanf("%lf", &sales);
  }
  selection (sales);
  return 0;
  
}

void selection(double sales){
  double PST = 0.08;
  double GST = 0.05;
  
  PST = sales * PST;
  GST = sales * GST;
  double total = sales + PST + GST;
  
  printf("Sales: $%.2lf\n", sales);
  printf("PST: $%.2lf\n", PST);
  printf("GST: $%.2lf\n", GST);
  printf("TOTAL: $%.2lf\n", total);
  printf("\n");
}
   
