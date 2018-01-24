#include <stdio.h>

void getElem(int elem[], int size);
void getUniq(int elem[], int size, int *idxToStore, int* nUniq);
void getUniq2(int elem[], int size, int* nUniq);

int main()
{
  int size = 3;
  int nSame = 0;
  int nUniq[10]; 
  int idxToStore = 0;
 
  //printf("Input the number of elements to be stored in the array: ");
  //scanf("%d", &size);

  int elem[3]={1,3,1};

  //getElem(elem, size);


  //printf("\n");

  //getUniq(elem, size, &idxToStore, nUniq);
  getUniq2(elem, size, nUniq);

  //This part is to check current values stored in nUniq
  /*printf("check array : ");

  for(int i = 0; i < 10; i++)
  {
    printf(" %d,",nUniq[i]);
  }
  */

  printf("\n");
  
  printf("The unique elements found in the array are: ");

  //This part is for getUniq
  /*for(int i = 0; i < idxToStore; i++)
  {
    printf(" %d",nUniq[i]);
  }
  */

  //This part is for getUniq2
  for(int i = 0; i < 10; i++)
  {
    if(nUniq[i] == 1)
    {
      printf(" %d", i);
    }
  }
  
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

void getUniq(int elem[], int size, int *idxToStore, int* nUniq)
{
  int nSame = 0;

  for (int i = 0; i < size; i++)
  {
    nSame = 0;

    for(int x = i+1; (x < size)&&(nSame == 0); x++)
    {
      if(elem[i] == elem[x])
      {
        nSame = nSame + 1;
      }
    }
    
    for(int y = i-1; (y >= 0)&&(nSame == 0); y-- )
    {
      if(elem[i] == elem[y])
      {
        nSame = nSame +1;
      }
    }

    if(nSame == 0)
    {
      nUniq[*idxToStore] = elem[i];
      (*idxToStore)++;
      
    }
  }
}
void getUniq2(int elem[], int size, int* nUniq)
{
  for(int i = 0; i < 10; i++)
  {
    nUniq[i] = 0;
  }

  for(int x = 0; x < size; x++)
  {
    //nUniq[elem[x]]++;
    nUniq[elem[x]] = nUniq[elem[x]] + 1;
  }
  
}
