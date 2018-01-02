#include <stdio.h>
#define SIZE 4

void displayArr(int nums[],int numsSize);

int main()
{
  int nums[SIZE] = {4,3,2,1};
  int x = 3;
  int temp;
  
  for(int loop1 = 0; loop1 < 3; loop1++)
  {
    for(int loop2 = 0; loop2 < x; loop2++)
    {
      if(nums[loop2] > nums[loop2+1])
      {
        temp = nums[loop2];
        nums[loop2] = nums[loop2+1];
        nums[loop2+1] = temp;
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
     
