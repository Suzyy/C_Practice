/*
 *C version of 2018 CCC Senior Problem 2 Solution
 *
 *Using gcc version: 4.2.1
 *
*/

#include <stdio.h>

void printRow(int arry[], int startPnt, int dirctn, int N) {
  if(dirctn > 0) {
    for(int i = startPnt; i < N; i++) {
      printf("%d ",arry[i]);
    }
  }
  else {
    for(int i = startPnt; i >= 0; i--) {
      printf("%d ",arry[i]);
    }
  }
  printf("\n");
}
  
void printColumn(int arry[], int startPnt, int dirctn, int N, int size) {
  if(dirctn < 0) {
    for(int i = startPnt; i < size; i = i + N) {
      printf("%d ",arry[i]);
    }
  } 
  else {
    for(int i = startPnt; i >= 0; i = i -N) {
      printf("%d ",arry[i]);
    }
  }
  printf("\n");
}
  
int main()
{
  FILE * fp = fopen("flowerC.txt", "r");

  int N = 0;

  fscanf(fp, "%d", &N);

  int size = N*N;
  int arry[size];
  int arryCopy[size];
  int location = 0;
  int temp = 0;
  int a = 1; 

  for(int i = 0; i < size; i++) 
  {
    fscanf(fp, "%d", &temp);
    arry[i] = temp;
    arryCopy[i] = temp;
  }
  
  for(int i = 0; i < size-1; i++)
  {
    for(int j = i+1; j <size; j++)
    {
      if(arryCopy[i] > arryCopy[j]) 
      {
        temp = arryCopy[i];
        arryCopy[i] = arryCopy[j];
        arryCopy[j] = temp;
      }
    }
  }
  
  for(int i = 0; i<size; i++)
  { 
    if(arry[i] == arryCopy[size-1])
    {
      location = i;
    }
  }
  
  if(location == (size-1))  //가장 큰수가 맨마지막칸에 있을경우(case 3)
  {
    int idx = 0;
    for(int i = 0; i < N; i++)
    {
      printRow(arry, idx, 1, N);
      idx = idx + N;
    }
  }
  else if(location == (size-1) - (N-1))  //가장 큰수가 맨아래 왼쪽칸에 있을경우(case 2)
  {
    int idx = N-1;
    for(int i = 0; i < N; i++)
    {
      printColumn(arry, idx, -1, N, size);
      idx--;
    }
  }
  else if(location == N-1) //가장 큰수가 맨위 오른쪽칸에 있을경우(case 4)
  {
    int idx = size-N;
    for(int i = 0; i < N; i++)
    {
      printColumn(arry, idx, 1, N, size);
      idx++;
    }
    
  }
  else if(location == 0) //가장 큰수가 맨처음칸에 있을경우 (case 1)
  {
    int idx = size-1;
    for(int i = 0; i < N; i++)
    {
      printRow(arry, idx, -1, N);
      idx = idx - N;
    }
  }
    
  return 0;
}

