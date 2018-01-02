#include <stdio.h>

int isEven(int n);

int main(){

  int n;
  int result;

  printf("Input any number: ");
  scanf("%d", &n);

  result = isEven(n);

  if(result){
    printf("The entered number %d is even", n);
  }
  else{
    printf("The entered number %d is odd", n);
  }
  printf("\n");

  return 0;
}

int isEven(int n){

  int isEvenVal;
  if(n % 2 == 0){
    isEvenVal = 1;
  }
  else{
    isEvenVal = 0;
  }
  return isEvenVal;
}
