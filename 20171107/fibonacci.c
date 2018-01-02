#include <stdio.h>

int getFibo (int n);

int main(){

  int Fibo = getFibo (12);
  printf("%d", Fibo);
  printf("\n");
  return 0;
}

int getFibo (int n){
  int i;
  int F;
  int Fp = 1;
  int Fpp = 1;
  for( i = 3; i <= n; i++){
    F = Fp + Fpp; 
    Fpp = Fp;
    Fp = F;
  }
  return F;
}
