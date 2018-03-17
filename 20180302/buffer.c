#include <stdio.h>

void printArry(int arry[], int size);
void timer();

void printArry(int arry[], int size){
  printf("\r");
  fflush(NULL);
  for(int i = 0; i < size; i++){
    printf("%d ",arry[i]);
  }
  timer();
}

void timer(){
  int x;
  for(int i  = 0; i < 500; i++){
    for(int j = 1; j < 501; j++){
      for(int k = 2; k < 502; k++){
        
        x = i*j*k;
      }
    }
  }
}

int main(){
  
  int x;
  char y;
  int arry[10] = {1,4,3,6,7,5,5,2,3,6};
  int temp;

  for(int i = 0; i < 10-1; i++)
  {
    for(int j = i +1; j < 10; j++)
    {
      if(arry[i] > arry[j])
      {
        temp = arry[i];
        arry[i] = arry[j];
        arry[j] = temp;
      }
    }
    printArry(arry, 10);
  }
  
  return 0;

}
