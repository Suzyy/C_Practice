#include <stdio.h>

int main(){

  int base;
  int exponent;
  int total = 1;
  int x;

  printf("Please enter the base: ");
  scanf("%d", &base);

  printf("\nPlease enter the exponent: ");
  scanf("%d", &exponent);
  
  printf("%d %d\n",base, exponent); 
  
  for(x = 1  ; x <= exponent; x++){
    total = total * base;
  }
 
  printf("\n%d raised to the power of %d is: %d\n",base,exponent,total);

  
  return 0;
}
  
