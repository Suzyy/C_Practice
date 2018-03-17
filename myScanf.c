#include <stdio.h>

int main(){
  
  char c = 0;

  while(c != '\n'){
    if('0' <= (c = getchar()) && c <= '9'){ }
    else{
      printf("Non number: [%c] is found\n", c);
    }
  }

  return 0;
}
