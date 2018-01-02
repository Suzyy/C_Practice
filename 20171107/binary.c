#include <stdio.h>

int changeToBin(int n);

int main(){
  int n;

  printf("Please enter a number: ");
  scanf("%d", &n);

  int bin = changeToBin(n);
  printf("The number you've entered is %d when you convert it to binary\n", bin);
  
  return 0;
}
 
int changeToBin(int n){
  int i = 1;
  int val = 0;

  while(n > 1){
    int x = n % 2;
    n = n / 2;
    val = val + (x * i);
    //printf("debug val1 = %d, n1 = %d\n", val, n);
    i = i * 10;
    
  }
  val = val + (n * i);
  //printf("debug val =  %d\n", val);
  //printf("debug n =  %d\n", n);
  return val;
}

