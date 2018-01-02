#include <stdio.h>

void getNDays(int* nDays, int* size);

int main()
{
  int nDays;
  int size;
  int x = 0;
  
  printf("---=== IPC Temperature Analyzer V2.0 ===---\n\n");
  
  getNDays(&nDays, &size);
  int days[size];

  for (int i = 1; i <= nDays; i++)
  {
    x = x + 1;
    printf("Day %d - High: ",i);
    scanf("%d", &days[x]);

    x = x + 1;
    printf("Day %d - Low: ",i);
    scanf("%d", &days[x]);
  }

  printf("\n");
  printf("Day  Hi  Low\n");

  x = 0;
  for (int i = 1; i <= nDays; i++)
  {
    x = x + 1;
    printf("%d    %d",i,days[x]);
    x = x + 1;
    printf("    %d\n",days[x]);
  }
  printf("\n");
  return 0;
}

void getNDays(int* nDays, int* size)
{
  int n;
  printf("Please enter the number of days, between 3 and 10, inclusive: ");
  printf("\n");
  scanf("%d", &n);

  while(!(2 < n)&&(n < 11))
  {
    printf("Invalid entry, please enter the number of days, between 3 and 10, inclusive: ");
    scanf("%d",  &n);
  }
  printf("\n");
  *nDays = n;
  *size = n * 2;
}


    
