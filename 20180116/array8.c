#include <stdio.h>

void getElem(int elem[], int size);
void getFreq(int elem[], int size, int *freq);
void getFreq2(int elem[], int size);

int main()
{
  int size = 0;
 
  printf("Input the number of elements to be stored in the array: ");
  scanf("%d", &size);

  int elem[size];
  int freq[size];

  getElem(elem, size);

  //getFreq(elem, size, freq);

  printf("\n");
  printf("The frequency of all elements in the array are:\n");

  /*for(int i = 0; i < size; i++)
  {
    printf("%d occurs %d times\n",elem[i],freq[i]);
  }
  printf("\n");
  */
  
  getFreq2(elem, size);

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

void getFreq(int elem[], int size, int freq[])
{
  for(int i = 0; i < size; i++)
  {
    freq[i] = 1;
  }

  for (int i = 0; i < size-2; i++)
  {
    for(int x = i+1; x < size-1; x++)
    {
      if(elem[i] == elem[x])
      {
        freq[i] = freq[i] + 1;
      }
      if(elem[x] == elem[i])
      {
        freq[x] = freq[x] + 1;
      }
    }
  }
}

void getFreq2(int elem[], int size)
{
  int freq2[10];

  for(int i = 0; i < 10; i++)
  {
    freq2[i] = 0;
  }

  for(int i = 0; i < size; i++)
  {
    //freq2[elem[i]] = freq2[elem[i]] + 1; 
    //freq2[elem[i]] +=  1; 
    freq2[elem[i]]++;
  }
  
  for(int x = 0; x < 10; x++)
  {
    if(!(freq2[x] == 0))
    {
      printf("%d occurs %d times\n",x,freq2[x]);
    }
  } 
}
        
  
    
      
    














