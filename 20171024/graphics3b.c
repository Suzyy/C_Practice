#include<stdio.h> 

int checkData();
int drawBox(int rows, int columns);

int main(){
  
  int isCont = 1;
  int x;
  
  while(isCont){
    if(!checkData()){
      printf("Cannot Draw the Box!\n");
    }
    
    printf("Draw another? (1-yes, 0-no): ");
    scanf("%d", &x);    
    isCont = x;
  }


} 

int checkData(){
  int columns;
  int rows;

  printf("Enter the number of columns: ");
  scanf("%d", &columns);
        
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
                           
  return drawBox(rows, columns);
}             

int drawBox(int rows, int columns){

  int isGood;

  if((columns > 0 && columns < 25) && (rows > 0 && rows < 25)){
    printf("\n");                            
  
    for(int y = 1; y <= rows; y++){
      for(int x = 1; x <= columns; x++){
        printf("*");
      }
      printf("\n");
    }
    printf("\n");
    isGood = 1;
  }
  else {
    isGood = 0;
  }
  return isGood;
}
   





 
    
    
   













