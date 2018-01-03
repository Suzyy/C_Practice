#include <stdio.h>

void getElem(int elem[], int size);
void getDupl(int elem[], int size, int *nDupl);

int main()
{
  int size = 0;
  int nDupl = 0;
 
  printf("Input the number of elements to be stored in the array: ");
  scanf("%d", &size);

  int elem[size];

  getElem(elem, size);

  getDupl(elem, size, &nDupl);

  printf("\n");
  printf("Total number of duplicate elements found in the array is: %d",nDupl);
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

void getDupl(int elem[], int size, int *nDupl)
{
  for (int i = 0; i < size-2; i++)
  {
    for(int x = i+1; x < size-1; x++)
    {
      if(elem[i] == elem[x])
      {
        *nDupl = *nDupl + 1;
      }
    }
  }
}
      
