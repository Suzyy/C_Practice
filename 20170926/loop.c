#include <stdio.h>

int main (){

  int i = 0;
  int total = 0;
  while (i<10){
    total = i + total;
    i++;
  }
  printf("total : %d",total);
  return 0;

}
  
