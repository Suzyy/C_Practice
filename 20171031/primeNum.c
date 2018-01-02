#include <stdio.h>

// given n value
int isPrime(int n){
  // find all divisors that has a remaindor of 0 shen it is divided by 1~n
  int numDiv = 0;
  
  for(int i = 1; i <= n; i++){
    if(n % i == 0){
      numDiv++;
    }
  }

  // if num of divisors is 2 isPrime = 1
  return (numDiv == 2);  
}
    
    

int main(){

  int n;

  printf("Input a positive number: ");
  scanf("%d", &n);

  if(isPrime(n)){
    printf("The number %d is a prime number", n);
  }
  else{
    printf("The number %d is not a prime number", n);
  }
  printf("\n");
  return 0;
}
