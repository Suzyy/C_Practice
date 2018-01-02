#include <stdio.h>
#define SIZE 5

int main()
{
  /*int nums[3];
  nums[0] = 1;
  nums[1] = 2;
  nums[2] = 3;
  */
  //int nums[3] = {1,2,3};
  int nums[SIZE];
  int sum = 0;
  
  printf("Enter %d numbers: ",SIZE);

  for(int x = 0;x < SIZE ; x++)
  {
    scanf("%d", &nums[x]);
    sum = sum + nums[x];
  }

  printf("The numbers are: ");

  for(int i = 0;i < SIZE ;i++)
  {
    printf("%d ",nums[i]);
  }
  printf("\n");
  printf("The sum of the numbers is: %d\n",sum);
    
  return 0;
}
