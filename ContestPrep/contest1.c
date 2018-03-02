#include<stdio.h>

int main()
{
  FILE * fp = fopen("contest1b.txt","r");
  
  int nDays;

  fscanf(fp, "%d", &nDays);
  int a[nDays];
  int b[nDays];
  int K = 0;
  int temp = 0;
  int sumA = 0;
  int sumB = 0;


  for(int i = 0; i < nDays; i++)
  {
    fscanf(fp,"%d", &temp);
    a[i] = temp;
    //printf("debug: temp = %d\n", temp);
  }

  for(int i = 0; i< nDays; i++)
  {
    fscanf(fp, "%d", &temp);
    b[i] = temp;
    //printf("debug: temp = %d\n", temp);
  }

  for(int i = 0; i < nDays; i++)
  {
    sumA = sumA + a[i];
    sumB = sumB + b[i];
    if(sumA == sumB)
    {
      K = i + 1;
    }
  }

  printf("\n");
  printf("%d", K);
  printf("\n");


  return 0;
}
