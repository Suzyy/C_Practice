#include <stdio.h>

int fac(int n){
  if(n == 1){
    printf(" %d", n);
    return 1;
  }
  printf(" %d *", n);
  return n * fac(n-1);
}

int main(){
  int n = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("%d! =", n);

    printf(" = %d\n", fac(n));
  
    return 0;
}
  
  
