#include <stdio.h>

int main(){

  long long x = 0;
  long long sum = 0;
/**
  sum = (x*(x+1))/2;
**/
  while ( x < 3000000003){
    sum = sum + x; 
    x++;
  }
  printf("%lld", sum);

  return 0;
}
