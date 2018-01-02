#include <stdio.h>

int main(){

  int columns;
  int rows;
  int x;
  int n;
  int isCont = 1;
  
  
  while(isCont){
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // BAD
    if(!(((columns > 0) && (columns < 25)) && ((rows > 0) && (rows < 25)))){
      printf("Cannot Draw the Box!\n");
    }
   
    // good 
    else {
        printf("\n");
        for(int y = 1; y <= rows; y++){
          for(int x = 1; x <= columns; x++){
            printf("*");
          }
          printf("\n");
        }
        printf("\n");
    }

    // Ask a re-draw?
    printf("Draw another? (1-yes, 0-no): ");
    scanf("%d", &x);
    if(x == 0){
      isCont = 0;
    }
  }
  
  return 0;
}
  

