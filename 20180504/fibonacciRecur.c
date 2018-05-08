#include <stdio.h>

int addPre2(int n){
  if(n == 0){
    return 0;
  }
  else if(n == 1){
    return 1;
  }
  return addPre2(n-1) + addPre2(n-2);
}

int main(){
  int n = 0;
  
  printf("Please enter an integer: ");
  scanf("%d", &n);
  
  printf("The nth fibonacci number is %d\n", (addPre2(n)));
  
  return 0;
}

