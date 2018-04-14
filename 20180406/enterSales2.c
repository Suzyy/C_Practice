#include <stdio.h>

int check(char stg[], int size){
  int isgood = 1;

  for(int i = 0; i < size; i++){
    if('0' <= stg[i] && stg[i] <= '9'){
    }
    else{
      isgood = 0;
      break;
    }
  }
  return isgood;
}
int pow2(int base, int exp){
  int total = 1;
  for(int i = 0 ; i<exp;i++){
    total *= base;
  }

  return total;
}
void merge(char stg[], int stgSize, int result[], int nth){
  int crrVal = 0;
  for(int i = 0; i < stgSize; i++){
    crrVal = crrVal + (stg[i] - '0') * pow2(10, stgSize - (i+1));
  }
  result[nth] = crrVal;
}
      

int main(){
  
  int isgood = 0;
  int sales[5];
  char stg[100];
  char c = 0;
  int nth = 0;
  int size = 0;
  int total = 0;

  //ask user for sales amount
  for(int i = 0; i < 5; i++){
    while(!isgood){
      printf("Enter sales amount for store #%d: ",i+1);
      c = getchar();
      while( c != '\n'){
        stg[nth++] = c;
        c = getchar();
      }
      isgood = check(stg, nth);

      if(!isgood){
        printf("Invalid sales amount - ");
      }
      else{
        merge(stg, nth, sales, i);
        //printf("debug: %d, i = %d\n", sales[i], i);
      }
      nth = 0;
    }
    isgood = 0;
    //printf("debug(i) : %d\n", i);
  }
        
  printf("\n");
  printf("MONTHLY SALES REPORT (BY STORE NUMBER) : \n");
  printf("\n");

  for(int i = 0 ; i < 5; i++){
    printf("Store #%d   $  %d\n", i+1, sales[i]);
    total = total + sales[i];
  }
  
  printf("            ---------\n");
  printf("TOTAL      $  %d\n", total);
 
  return 0;
}
