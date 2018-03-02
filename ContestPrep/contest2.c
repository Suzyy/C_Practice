#include <stdio.h>

int main()
{
  FILE *fp = fopen("contest2a.txt", "r");
  
  int N;
  int temp = 0;
  int tideTemp;

  fscanf(fp, "%d", &N);
  int tideSort[N];

  for(int i = 0; i < N; i++)
  {
    fscanf(fp, "%d", &temp);
    tideSort[i] = temp;
  }

  for(int i = 0; i < N; i++)
  {
    for(int j = i+1; j < N; j++)
    {
      if(tideSort[i] > tideSort[j])
      {
        tideTemp = tideSort[i];
        tideSort[i] = tideSort[j];
        tideSort[j] = tideTemp;
      }
    }
  }
  for(int i = 0; i < N; i++)
  {
    printf("%d ", tideSort[i]);
  }
  printf("\n");

  for(int i = (N/2)-1, j = (N/2); (i >= 0) && (j < N); i--, j++)
  {
    printf("%d ", tideSort[i]);
    printf("%d ", tideSort[j]);
  }
  printf("\n");

  return 0;
}

    
        
