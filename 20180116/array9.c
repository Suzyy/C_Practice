#include <stdio.h>

void getElem(int elem[], int size);
void getMaxMin(int elem[], int size, int *max, int*min);
void getMaxMin2(int elem[], int size, int *max, int*min);
void getMaxMin3(int elem[], int size, int *max, int *min);


int main()
{ 
  int size = 9999999;
  int max = 0;
  int min  = 9999999;;
  
  //printf("Input the number of elements to be stored in the array: ");
  //scanf("%d", &size);
  
  
  //int elem[size];
  int elem[9999999];
  for (int i=0; i<size; i++){
    elem[i] = i % 10000 + 3;
    //printf("assign %d\n", elem[i]);
  }
  
  //getElem(elem, size);
  
  getMaxMin(elem, size, &max, &min);
  getMaxMin2(elem, size, &max, &min);
  getMaxMin3(elem, size, &max, &min);
  
  
  
  printf("\n");

  printf("Maximum element is: %d\n", max);
  printf("Minimum element is: %d\n", min);

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

void getMaxMin(int elem[], int size, int *max, int *min)
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
  
  *min = elem[0];
  *max = elem[size-1];
}

void getMaxMin2(int elem[], int size, int *max, int *min)
{
  *max = elem[0];
  *min = elem[0];

  for(int i = 1; i < size; i++)
  {
    if(elem[i] > *max)
    {
      *max = elem[i];
    }
    if(elem[i] < *min)
    {
      *min = elem[i];
    }
  }
}
void getMaxMin3(int elem[], int size, int *max, int *min)
{
  *max = elem[0];
  *min = elem[0];

  for(int i = 1; i < size; i++)
  {
    if(elem[i] > *max)
    {
      *max = elem[i];
    }
    else if(elem[i] < *min)
    {
      *min = elem[i];
    }
  }
}


      
  

