#include <stdio.h>

void getNDays(int* nDays);

int main()
{ 
  int nDays;
  int avgDay;
  double avg;
  int lastAvg = 0;
  double cSum;
  
  printf("---=== IPC Temperature Analyzer V2.0 ===---\n\n");
  
  getNDays(&nDays);
  int daysHi[nDays];
  int daysLow[nDays];
  
  for (int i = 0; i < nDays; i++)
  { 
    //i+1을 했는데 프린트하면 0 이나와요!
    printf("Day %d - High: ",i+1);
    scanf("%d", &daysHi[i]);
    
    printf("Day %d - Low: ",i+1);
    scanf("%d", &daysLow[i]);
  }
  
  printf("\n");
  printf("Day  Hi  Low\n");
  
  for (int i = 0; i < nDays; i++)
  { 
    printf("%d    %d",i,daysHi[i]);
    printf("    %d\n",daysLow[i]);
  }
  printf("\n");

  printf("Enter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ",nDays);
  scanf("%d",&avgDay);
  

  while(0 <= avgDay)
  {
    double tSum = 0;
    
    //--------------------------------------
    // Valid  1 <= avgDay <= nDays
    //--------------------------------------
    if((1 <= avgDay)&&(avgDay <= nDays))
    {
      //caluclating the average temperature up to n days
      for(int x = 0; x < avgDay; x++)     
      {
        cSum = (daysHi[x] + daysLow[x]);
        
        tSum = tSum + cSum;
      }
      avg = tSum / (avgDay * 2);
      //up to this point

      printf("The average temperature up to day %d is: %.2lf",avgDay,avg); 
      printf("\n");
   
      printf("Enter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ",nDays);
      scanf("%d", &avgDay); 
    }
    //--------------------------------------
    // invalid, avgDay > Ndays
    //--------------------------------------
    else if ( avgDay > nDays || 0 == avgDay)
    {
      printf("Invalid enter, please enter a number between 1 and %d, inclusive: ",nDays);
      scanf("%d", &avgDay);
    }
  }

  printf("Goodbye!");
  printf("\n");
  return 0;
}

void getNDays(int* nDays)
{
  int n;
  printf("Please enter the number of days, between 3 and 10, inclusive: ");
  printf("\n");
  scanf("%d", &n);

  while(!(2 < n && n < 11))
  {
    printf("Invalid entry, please enter the number of days, between 3 and 10, inclusiv    e: ");
    scanf("%d",  &n);
  }
  printf("\n");
  *nDays = n;
}

