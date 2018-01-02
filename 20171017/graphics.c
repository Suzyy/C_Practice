#include<stdio.h>

void addUp(int n1, int n2){
  int n3;
  n3 = n1 + n2;
  printf("%d\n", n3);
}

void power (int base, int exponent){
  int x;
  int total = 1;

  for(x = 1; x <= exponent; x++){
    total = total * base;
  }
  printf("%d\n", total);
}    

void square(int columns, int rows){
 
  for(int y = 1; y <= rows; y++){
    for(int x = 1; x <= columns; x++){
      printf("*");
    }
    printf("\n");
  }
}

int main(){

  /*addUp(2,3);

  power(2,4);*/
  int columns;
  int rows;
  
  printf("Enter the number of columns: ");
  scanf("%d", &columns);

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  printf("\n");

  square(columns , rows);  
  printf("\n");
  
  return 0;
} 
