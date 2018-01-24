#include <stdio.h>

void getElem(int elem[], int size);
void delPrntN(int elem[], int size);

int main()
{ 
  int size = 0;
  
  printf("Input the number of elements to be stored in the array: ");
  scanf("%d", &size);
  
  int elem[size];
  
  getElem(elem, size);
  
  printf("\n");

  delPrntN(elem, size);

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

void delPrntN(int elem[], int size)
{
  int pos = 0;
  
  printf("Input the position where to delete: ");
  scanf("%d", &pos);

  printf("The new list is: ");

  for(int i = 0; i < size; i++)
  {
    if(!(i==pos-1))
    {
      printf("%d",elem[i]);
      printf(" ");
    }
  }
}



