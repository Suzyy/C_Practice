#include <stdio.h>

void getElem(int elem[], int size);
void getPrnt2N(int elem[], int size, int *secMax);
void getPrnt2N2(int elem[], int size, int *secMax);

int main()
{ 
  int size = 0;
  int secMax;
  
  printf("Input the number of elements to be stored in the array: ");
  scanf("%d", &size);
  
  int elem[size];
  
  getElem(elem, size);
  
  getPrnt2N(elem, size, &secMax);
  printf("The second largest element in the array is: %d\n", secMax);

  getPrnt2N2(elem, size, &secMax);
  printf("The second largest element in the array is: %d\n", secMax);
  
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

void getPrnt2N(int elem[], int size, int *secMax)
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
  
  *secMax = elem[size-2];
}
  
void getPrnt2N2(int elem[], int size, int *secMax)
{
  *secMax = 0;
  
  int max;
  int max2;

  if(elem[0] > elem[1])
  {
    max = elem[0];
    max2 = elem[1];
  }
  else
  {
    max = elem[1];
    max2 = elem[0];
  }


  for(int i = 1; i < size; i++)
  {
    if(elem[i] <= max)
    {
      if(elem[i] >= max2)
      {
        max2 = elem[i];
      }
    }
    else
    {
      max2 = max;
      max = elem[i];
    }
  }
  *secMax = max2;
}




