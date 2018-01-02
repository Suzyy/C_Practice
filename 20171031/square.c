#include <stdio.h>

long square(int n);

int main(){

  int n;

  printf("Input any number for square: ");
  scanf("%d", &n);

  printf("The square of %d is: %ld ", n, square(n));
  printf("\n");
  return 0;

}

long square(int n){
  
  int total;
  total = n * n;
  return total;

}


