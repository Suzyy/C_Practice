#include <stdio.h>
#define SIZE 10

void getPrintN(int elem[]);

int main()
{
  int elem[SIZE];
  
  printf("Input %d elements in the array: \n",SIZE);

  getPrintN(elem);

  return 0;
}

void getPrintN(int elem[])
{
  for(int i = 0; i < SIZE; i++)
  {
    printf("element-%d: ",i);
    scanf("%d", &elem[i]);
  }

  printf("\n");
  printf("Elements in array are: ");

  for(int x = 0; x < SIZE; x++)
  {
    printf("%d ", elem[x]);
  }
}
    
