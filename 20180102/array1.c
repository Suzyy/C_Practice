#include <stdio.h>
#define SIZE 10

void getNums(int elem[]);
void printNums(int elem[]);

int main()
{
  int elem[SIZE];
  printf("Input %d elements in the array: \n",SIZE);

/**
  printf("%d\n", elem[1]);
  printf("%d\n", *(elem+1));

  printf("%d\n", elem+1);
  printf("%d\n", &elem[1]);
**/
  getNums(elem);
  printfNums(elem);
  
  return 0;
}
  
//void getNums(int elem[])
void getNums(int *elem)
{
  for(int i = 0; i < SIZE; i++)
  {
    printf("element-%d : ",i);
    scanf("%d",&elem[i]);
  }
}

//void printNums(int elem[])
void printNums(int* elem)
{
  printf("Elements in array are: ");

  for(int i = 0; i < SIZE; i++)
  {
    //printf("%d ",elem[i]);
    printf("%d ",*(elem+i));
  }
}

  
