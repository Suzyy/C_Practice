#include <stdio.h>

void getN(int* num, int* myret){
  printf("Please enter an integer value: ");
  *myret = scanf("%d", &*num);
}

int main(){

  int num = 123;
  int myret;
  int x = 1;
  char c = 0;
  
  getN(&num, &myret);
  //printf("myret = %d\n", myret);
  
  while(x > 0){
    if(myret != 1){
      while ((c = getchar()) != '\n') { }
      printf("Invalid integer!\n");
      getN(&num, &myret);
    }
    if(myret == 1){
      printf("The valid integer is %d\n", num);
      x = 0;
    }
  }

  return 0;
}

  

