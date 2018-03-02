#include <stdio.h>

void getElem(int elem[], int size);
void delPrntN(int elem[], int size);
void secHigh(int elem[], int size, int *testHi);
void test(int *testHi);

int main()
{ 
  int size = 0;
  int testHi = 0;
  
  //printf("Input the number of elements to be stored in the array: ");
  //scanf("%d", &size);
  
  //int elem[size];
  
  //getElem(elem, size);
  
  printf("\n");

  //delPrntN(elem, size);
  //secHigh(elem, size);
  test(&testHi);

  printf("\n");
  
  return 0;
}

void getElem(int elem[], int size)
{
  printf("Input %d elements in the array: \n", size);

  for(int i = 0; i < size; i++)
  {
    printf("element-%d : ",i);
    scanf("%d", &elem[i]);
  }
}

void delPrntN(int elem[], int size)
{
  int pos = 0;
  
  printf("Input the position where to delete: ");
  scanf("%d", &pos);

  for(int i = pos; (i < size); i++)
  {
    elem[i-1] = elem[i];
  }
    
  printf("The new list is: ");

  for(int i = 0; i < size-1; i++)
  {
    printf("%d",elem[i]);
    printf(" ");
  }
}

void secHigh(int elem[], int size, int* testHi)
{
  int hi;
  int preHi;


  if(size == 1)
  {
    hi = elem[0];
    preHi = 0;
  }
  else if(size == 2)
  {
    hi    = elem[0] > elem[1] ? elem[0] : elem[1];
    preHi = elem[0] > elem[1] ? elem[1] : elem[0];
  }
  else
  {
    hi    = elem[0] > elem[1] ? elem[0] : elem[1];
    preHi = elem[0] > elem[1] ? elem[1] : elem[0];

    for(int i = 2; (i < size); i++)
    {
      
      if(elem[i] > hi)
      {
        preHi = hi;
        hi = elem[i];
      }
      else if(elem[i] > preHi)
      {
        preHi = elem[i];
      }
    }
  }
  *testHi = preHi;
  
  //printf("The second highest number is: %d", preHi);
  //printf("\n");
}
void test(int *testHi)
{
  int exp0 = 0;
  int test0[1];
  secHigh(test0, 0, testHi);
  if(exp0 != *testHi)
  {
    printf("FAIL (exp0 = %d / testHi = %d) ",exp0, *testHi);
    printf("\n");
  }

  int exp1 = 0;
  int test1[1] = {5};
  secHigh(test1, 1, testHi);
  if(exp1 != *testHi)
  {
    printf("FAIL (exp1 = %d / testHi = %d) ",exp1, *testHi);
    for(int h = 0; h < 1; h++)
    {
      printf(" %d", test1[h]);
    }
    printf("\n");
  }

  int exp2 = -4;
  int test2[2] = {4,-4};
  secHigh(test2, 2, testHi);
  if(exp2 != *testHi)
  {
    printf("FAIL (exp2 = %d / testHi = %d) ",exp2, *testHi);
    for(int h = 0; h < 2; h++)
    {
      printf(" %d", test2[h]);
    }
    printf("\n");
  }

  int exp2a = -4;
  int test2a[2] = {-4,4};
  secHigh(test2a, 2, testHi);
  if(exp2a != *testHi)
  {
    printf("FAIL (exp2a = %d / testHi = %d) ",exp2a, *testHi);
    for(int h = 0; h < 2; h++)
    {
      printf(" %d", test2a[h]);
    }
    printf("\n");
  }

  int test[4];

  for(int i = 1; i < 10; i++)
  {
    for(int j = i; j < 10; j++)
    {
      for(int k = j; k < 10; k++)
      {
        for(int x = k; x < 10; x++)
        {
          test[0] = i;
          test[1] = j;
          test[2] = k;
          test[3] = x;
          int exp = test[2];
          secHigh(test, 4, testHi);
          if(exp != *testHi)
          {
            printf("FAIL (exp = %d / testHi = %d) ",exp, *testHi);
            for(int h = 0; h < 4; h++)
            {
              printf(" %d", test[h]);
            }
            printf("\n");
          }
      
        }
      }
    }
  }
}

      
    
    
             
