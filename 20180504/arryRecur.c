#include <stdio.h>

int storeArry(int arry[], int size, int crr){
  if(crr > size-1){
    return 0;
  }
  printf("element - %d :",crr);
  scanf("%d", &arry[crr]);
  
  storeArry(arry, size, crr+1);
}
int prntArry(int arry[], int size, int crr){
  if(crr > size-1){
    return 0;
  }
  printf("%d ", arry[crr]);
  
  prntArry(arry, size, crr+1);
}

int main(){
  int size = 0;
  
  printf("Input the number of elements to be stored in the array: ");
  scanf("%d", &size);

  int arry[size];
  
  printf("Input %d elements in the array:\n", size);

  storeArry(arry, size, 0);

  printf("The elements in the array are: ");
  
  prntArry(arry, size, 0);
  printf("\n");

  return 0;
}


  
