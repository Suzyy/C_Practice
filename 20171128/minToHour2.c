#include<stdio.h>

void changeMin(int total, int *hr, int *min);

int main()
{
  int total;
  int hr;
  int min;
  
  printf("Please enter total minutes: ");
  scanf("%d", &total);
  
  changeMin(total, &hr, &min);
  printf("%d hours and %d minutes\n", hr, min);

  return 0;
}
void changeMin(int total, int *hr, int *min)
{
  *hr = total / 60;
  *min = total % 60;
}
