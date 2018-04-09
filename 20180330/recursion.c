#include <stdio.h>

int add(int n){
  if(n == 1){
    printf("add(%d)\n", n);
    return 1;
  }
  printf("add(%d) + %d \n", n-1, n);
  return add(n-1) + n;
}

int main(){
  printf("%d\n", (add(7))); 

  return 0;
}

  
