#include <stdio.h>

void getElem(int elem[], int size);

int main()
{
  int size;
 
  printf("Input the number of elements to be stored in the array: ");
  scanf("%d", &size);

  int elem[size];

  getElem(elem, size);

  return 0;
}

void getElem(int elem[], int size)
{
  printf("Input %d elements in the array: \n", size);

  for(int i = 0; i < size; i++)
  {
    printf("element-%d : ",i);
    scanf("%d", &elem[i]);
  }
}
