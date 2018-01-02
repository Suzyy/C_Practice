#include <stdio.h>

void getN(int array1[], int size);
void copyN(int array1[],int array2[], int size);
void printN(int array[], int size);

int main()
{
  int size;

  printf("Input the numbers of elements to be stored in the array: ");
  scanf("%d", &size);

  int array1[size];
  int array2[size];

  printf("Input %d elements in the array: \n",size);

  getN(array1, size);

  printf("\n");
  
  copyN(array1, array2, size);

  printf("The elements stored in the first array are: ");
  printN(array1, size);

  printf("The elements stored in the second array are: ");
  printN(array2, size);
  

  printf("\n");
  return 0;
}

void getN(int array1[], int size)
{
  for(int i = 0; i < size; i++)
  {
    printf("element-%d : ",i);
    scanf("%d", array1+i);
  }
}
  
void copyN(int array1[], int array2[], int size)
{
  for(int i = 0; i < size; i++)
  {
    array2[i] = array1[i];
  }
  
}
  
void printN(int array[], int size)
{ 
  for(int x = 0; x < size; x++)
  {
    printf("%d ",array[x]);
  }
}
  
  
