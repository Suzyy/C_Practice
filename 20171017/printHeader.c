#include <stdio.h>

void printHeader()
{
  printf("+-------------------------+\n");
  printf("|       Sales Report      |\n");
  printf("+-------------------------+\n\n");
}

void printFooter()
{
  printf("+-------------------------+\n");
  printf("|   End of Sales Report   |\n");
  printf("+-------------------------+\n");
}

int main(){

  float sales = 34.00;
  float GST = 0.05;
  float PST = 0.08;
  float GSTvalue;
  float PSTvalue;
  float total;

  GSTvalue = sales * GST;
  PSTvalue = sales * PST;

  total = sales *(1 + (GST + PST));

  printHeader();
  
  printf("Sales: $%.2f\n", sales);
  printf("GST: $%.2f\n", GSTvalue);
  printf("PST: $%.2f\n", PSTvalue);
  printf("TOTAL: $%.2f\n\n", total);

  printFooter();

  return 0;
} 
