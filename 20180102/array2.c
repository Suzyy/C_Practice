#include <stdio.h>

void getPrintN(int elem[], int size);

int main()
{
  int size;

  printf("Input the number of elements to store in the array: ");
  scanf("%d", &size);

  int elem[size];

  getPrintN(elem, size);

  return 0;
}

void getPrintN(int elem[], int size)
{
  printf("Input %d numbers of elements in the array: \n", size);

  for(int i = 0; i < size; i++)
  {
    printf("element-%d : ", i);
    scanf("%d", &elem[i]);
  }

  printf("\n");
  printf("The values stored into the array are: ");
  
  for(int x = 0; x < size; x++)
  {
    printf("%d ", elem[x]);
  }

  printf("\n");
  printf("The values store in the array in reverse are: ");

  for(int y = size-1; 0 <= y; y--)
  {
    printf("%d ", elem[y]);
  }
}
