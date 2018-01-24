#include <stdio.h>

void getElem(int elem[], int size);
void bbleSort(int elem[], int size);

int main()
{
  int size = 0;
 
  printf("Input the number of elements to be stored in the array: ");
  scanf("%d", &size);

  int elem[size];

  getElem(elem, size);

  bbleSort(elem, size);

  printf("\n");
 
  printf("\n");

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

void bbleSort(int elem[], int size)
{
  int temp;
    
  for(int i = 0; i < size-1; i++)
  {
    for(int x = 0; x < size-1; x++)
    {
      if(elem[x] > elem[x+1])
      {
        temp = elem[x];
        elem[x] = elem[x+1];
        elem[x+1] = temp;
      }
    } 
  } 
  
  printf("Elements of array in sorted ascending order:\n");
  
  for(int i = 0; i < size; i++)
  {
    printf("%d", elem[i]);
    printf(" ");
  }
}


