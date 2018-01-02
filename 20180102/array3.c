#include <stdio.h>

void getAdd(int *elem, int size, int* sum);
int getAdd2(int *elem, int size);

int main()
{
  int size;
  int sum = 0;
  int sum2;

  printf("Input the number of elements to be stored in the array: ");
  scanf("%d", &size);
  
  int elem[size];

  getAdd(elem, size, &sum);

  printf("\n");
  printf("Sum of all elements stored in the array are: %d", sum);
  printf("\n");

  printf("Sum of all elements stored in the array are: %d", getAdd2(elem, size));
  printf("\n");

  return 0;
}
  
void getAdd(int *elem, int size, int* sum)
{
  printf("Input %d elements in the array: \n", size);
  
  for(int i = 0; i < size; i++)
  {
    printf("element-%d : ",i);
    scanf("%d", (elem+i));
    //scanf("%d",&*(elem+i));

    *sum = *sum + *(elem+i);
  }

}
int getAdd2(int *elem, int size)
{
  int sum = 0;
  printf("Input %d elements in the array: \n", size);
  
  for(int i = 0; i < size; i++)
  {
    printf("element-%d : ",i);
    scanf("%d", (elem+i));
    //scanf("%d",&*(elem+i));

    sum = sum + *(elem+i);
  }
  return sum;
}
