#include<stdio.h> 


int main(){

  int columns;
  int rows;
  int x;
  int n;

  n = 1;   
  x = 1;

  int isDone = 0;
 
  while( !isDone ){  
  //while(n == 1){  
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\n");

    for(int y = 1; y <= rows; y++){
      for(int x = 1; x <= columns; x++){
        printf("*");
      }
      printf("\n");
    }
 
    printf("\n");
    printf("Draw another? (1-yes, 0-no): ");
    scanf("%d", &x);    
    //if ( x == 0 ){
    //  isDone = 1;
    //}
    isDone =  x == 0;


    // if(x == 0){
    //  break;
    // }
  }

  return 0;
} 
