#include <stdio.h>

void getElem(int elem[], int size);
void getPrntN(int elem[], int size);

int main()
{
  int size = 0;
 
  printf("Input the number of elements to be stored in the array: ");
  scanf("%d", &size);

  int elem[size];

  getElem(elem, size);

  printf("\n");

  getPrntN(elem, size);

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

void getPrntN(int elem[], int size)
{
  printf("The even elements are:\n");
  
  for(int i = 0; i < size; i++)
  {
    if(elem[i] % 2 == 0)
    {
      printf(" %d",elem[i]);
    }
  }
  
  printf("\n");
  
  printf("The odd elements are:\n");

  for(int i = 0; i < size; i++)
  {
    if(elem[i] % 2 == 1)
    {
      printf("%d", elem[i]);
      printf(" ");
    }
  }
}
  
