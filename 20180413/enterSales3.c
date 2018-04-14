#include <stdio.h>

#if 0
int check(char stg[], int size){
  int isgood = 1;
  int countDot = 0;

  for(int i = 0; i < size; i++){
    if('0' <= stg[i] && stg[i] <= '9'){
    }
    else if(stg[i] == '.'){
      countDot++;
    }
    else{
      isgood = 0;
      break;
    }
  }
  printf("debug : isgood = %d\n", isgood);
  return isgood && (counutDot < 2);
}
#endif

void merge(char stg[], int stgSize, int result[], int nth);

int check(char stg[], int size){
  int isgood = 1;
  int countDot = 0;

  for(int i = 0; i < size; i++){
    if('0' <= stg[i] && stg[i] <= '9'){
    }
    else if(stg[i] == '.' && countDot == 0){
      countDot = 1;
    }
    else if(stg[i] == '.' && countDot == 1){
      isgood = 0;
      break;
    }
    else{
      isgood = 0;
      break;
    }
  }
  //printf("debug : isgood = %d\n", isgood);
  return isgood;
}
int pow2(int base, int exp){
  int total = 1;
  for(int i = 0 ; i<exp;i++){
    total *= base;
  }

  return total;
}
void split(char stg[], int stgSize, char integer[], char decimal[], int* intSize, int*decSize){
  int isdotFound = 0;
  int intCnt = 0;
  int decCnt = 0;

  for(int i = 0; i < stgSize; i++){
    if(stg[i] == '.'){
      isdotFound = 1;
    }
    else if(!isdotFound){
      integer[intCnt++] = stg[i];
    }
    else if(isdotFound){
      decimal[decCnt++] = stg[i];
    }
  }
  *intSize = intCnt;
  *decSize = decCnt;
}
void org(char decimal[], int* decSize, double* part2){
  int num = 0;
  int val;
  merge(decimal, *decSize, &val, 0);
  //printf("debug: val = %d\n", val);
  
  *part2 = val / (pow2(10, *decSize)*1.0);
  //printf("power = %d\n", pow2(10, *decSize));
  //printf("part2 = %.2lf\n", *part2);
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
  double sales[5];
  char stg[100] = "12.34";
  char c = 0;
  int nth = 0;
  int size = 0;
  double total = 0;
  char integer[100];
  char decimal[100];
  int intSize;
  int decSize;
  int part1[100];
  double part2[100];

  #if 0
  split(stg, 5, integer, decimal, &intSize, &decSize);
  printf("split int : %4.4s\n", integer);
  printf("split dec : %2.2s\n", decimal);
  printf("intSize = %d , decSize = %d\n", intSize, decSize);
  
  org(decimal, &decSize, &part2);
  printf("org = %.2lf\n", part2);
  #endif

  #if 1
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
        split(stg, nth, integer, decimal, &intSize, &decSize);
        merge(stg, intSize, part1, i);
        org(decimal, &decSize, &part2[i]);
        sales[i] = part1[i] + part2[i];
        //printf("part1 = %d, part2 = %.2lf\n", part1[i], part2[i]);
        //printf("debug: %d, i = %d\n", sales[i], i);
      }
      nth = 0;
    }
    isgood = 0;
    //printf("debug(i) : %d\n", i);
  }
  #endif
        
  printf("\n");
  printf("MONTHLY SALES REPORT (BY STORE NUMBER) : \n");
  printf("\n");

  for(int i = 0 ; i < 5; i++){
    printf("Store #%d   $  %10.2lf\n", i+1, sales[i]);
    total = total + sales[i];
  }
  
  printf("            ------------\n");
  printf("TOTAL      $  %10.2lf\n", total);
 
  return 0;
}
