#include <stdio.h>

void getNDays(int* nDays, int* size);

int main()
{ 
  int nDays;
  int size;
  int x = -1;
  int avgDay = 2;
  double avg;
  
  printf("---=== IPC Temperature Analyzer V2.0 ===---\n\n");
  
  getNDays(&nDays, &size);
  int days[size];
  
  for (int i = 0; i < nDays; i++)
  { 
    x = x + 1;
    printf("Day %d - High: ",i+1);
    scanf("%d", &days[x]);
    
    x = x + 1;
    printf("Day %d - Low: ",i+1);
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

  printf("Enter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ",nDays);
  scanf("%d",&avgDay);
  

  for(int k = 1;;k++)
  {
    while((1 <= avgDay)&&(avgDay <= nDays))
    {
      int n1, n2;
      n1 = (avgDay * 2) - 1;
      n2 = (avgDay * 2);
      avg = (days[n1] + days[n2]) / 2;

      printf("The average temperature up to day %d is: %.2lf",avgDay,avg); 
      printf("\n");
   
      printf("Enter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ",nDays);
      scanf("%d", &avgDay); 
    }

    while(!(avgDay < 0) || ((1 <= avgDay)&&(avgDay <= nDays)))
    {
      printf("Invalid enter, please enter a number between 1 and %d, inclusive: ",nDays);
      scanf("%d", &avgDay);
    }
    
    if(avgDay < 0)
    {
      printf("Goodbye!");
      return 0;
    }
  }

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
    printf("Invalid entry, please enter the number of days, between 3 and 10, inclusiv    e: ");
    scanf("%d",  &n);
  }
  printf("\n");
  *nDays = n;
  *size = n * 2;
}

