#include <stdio.h>

int main(){
  int n1 = 0;
  int n2 = 1;
  int nth = 0;
  int total = 0;

  printf("Please enter an integer : ");
  scanf("%d", &nth);

  for(int i = 0 ; i < nth-1; i++){
    total = n1 + n2;
    n1 = n2;
    n2 = total;
  }

  printf("The nth fibonacci number is %d\n", total);

  return 0;
}
    
