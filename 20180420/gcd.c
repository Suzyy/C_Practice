#include <stdio.h>

static int getGCD(int num1, int num2){
  int crrGcd = 0;
  int size = 0;
  size = num1;

  //size = num1 > num2? num2: num1;
  int i = size;
  while(i>0){
    i--;
  }
  //for(int i = size; i > 0; i--){
  //  //if((num1 % i == 0)&&(num2 % i == 0)){
  //  //  crrGcd = i;
  //  //  break;
  //  //}
  //}
  return crrGcd;
      
}
int getGCD2(int num1, int num2){
  int isgood = 0;
  int gcd = 0;
  
  //printf("line: %d\n",__LINE__);
  
  while(!isgood){
    if(num1 == num2){
      gcd = num1;
      isgood = 1;
    }
    else if(num1 > num2){
      num1 = num1 - num2;
      if(num1 == num2){
        gcd = num1;
        isgood = 1;
      }
      else{
      }
    }
    else{
      num2 = num2 - num1;
      if(num1 == num2){
        gcd = num1;
        isgood = 1;
      }
      else{
      }
    }
  }
  return gcd;
}

int getGCD3(int a, int b){
  int gcd = 0;

  if(a == b){
    return a;
  }
  else if( a > b){
    return getGCD3(a-b, b);
  }
  else{
    return getGCD3(a, b-a);
  }
}
  
  
  

int main(){
  int GCD = 0;
  int GCD2 = 0;
  int size = 2000000;

  GCD2 = getGCD3(2000000, 19999999);
  for(int i = 1; i <= size; i++){
    for(int j = 1; j <= size; j++){
     // GCD = getGCD2(i, j);
      GCD2 = getGCD3(i, j);
      
      //printf("line: %d\n",__LINE__);
      //printf("i = %d, j = %d // %d, %d\n", i, j, GCD, GCD2);

      //if(GCD != GCD2){
       // printf("FAIL\n");
     // }
      //else{
     // }
    }
  }

  
  return 0;
}
