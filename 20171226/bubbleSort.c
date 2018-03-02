#include <stdio.h>
#define SIZE 4

void displayArr(int nums[],int numsSize);

int main()
{
  int nums[SIZE] = {4,3,2,1};
  int temp;
  
  for(int loop1 = 0; loop1 < SIZE-1; loop1++)
  {
    for(int loop2 = loop1+1; loop2 < SIZE; loop2++)
    {
      if(nums[loop1] > nums[loop2])
      {
        temp = nums[loop1];
        nums[loop2] = nums[loop1];
        nums[loop2] = temp;
      }
      displayArr(nums, SIZE);
    }
    printf("----------------------------------\n");
  }
  displayArr(nums, SIZE);
    
  return 0;
}
  
void displayArr(int nums[], int numsSize)
{
  for(int i = 0; i < numsSize; i++)
  {
    printf("%d  ",nums[i]);
  }
  printf("\n");
}
     
