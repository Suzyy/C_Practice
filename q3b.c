#include<stdio.h>
#define DEBUG 0

//
// gcc -O3 -Wl,--stack=81943000 q3b.c && time a.exe
//

#if DEBUG
  #define id(...) printf("____%d___",__LINE__);printf(__VA_ARGS__);
#else
  #define id(...) 
#endif

void getExp(char *outFileName, int* expLenLongestFen, int* expNumDiffHeight);
void getMaxLenAndNumFen(char* inFileName, int* actLongFen, int* actNumDiffH);
void sort(int ar[], int arLen);
void printAr(int* ar, int arLen);
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);

//-------------------------------------------------------------
//                                                             
//                                                             
//  MAIN                                                            
//                                                             
//                                                             
//-------------------------------------------------------------
int main(){
  int actLenLongestFen = 0;
  int actNumDiffHeight = 0;

  int expLenLongestFen = 0;
  int expNumDiffHeight = 0;


#if 1
  //--------------------------------------
  printf("# test sample 01\n");
  getMaxLenAndNumFen("senior_data/s3/s3_sample.01.in", &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3_sample.01.out", &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test sample 02\n");
  getMaxLenAndNumFen("senior_data/s3/s3_sample.02.in", &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3_sample.02.out", &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
//10000
  printf("# test s3.01    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.01.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.01.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");

  //--------------------------------------
  printf("# test s3.02    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.02.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.02.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.03    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.03.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.03.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.04    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.04.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.04.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");

  //--------------------------------------
  printf("# test s3.05    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.05.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.05.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.06    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.06.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.06.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  // 1000000
  printf("# test s3.07    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.07.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.07.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
// 100
  //--------------------------------------
  printf("# test s3.08    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.08.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.08.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.09    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.09.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.09.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.10    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.10.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.10.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.11    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.11.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.11.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.12    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.12.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.12.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.13    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.13.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.13.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.14    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.14.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.14.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.15    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.15.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.15.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.16    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.16.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.16.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.17    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.17.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.17.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.18    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.18.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.18.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.19    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.19.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.19.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.20    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.20.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.20.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.21    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.21.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.21.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.22    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.22.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.22.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.23    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.23.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.23.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.24    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.24.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.24.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.25    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.25.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.25.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.26    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.26.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.26.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.27    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.27.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.27.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
  //--------------------------------------
  printf("# test s3.28    \n");
  getMaxLenAndNumFen("senior_data/s3/s3.28.in"       , &actLenLongestFen, &actNumDiffHeight);
              getExp("senior_data/s3/s3.28.out"      , &expLenLongestFen, &expNumDiffHeight);
  printf("exp: %d %d, act: %d %d: %s\n", expLenLongestFen, expNumDiffHeight, actLenLongestFen, actNumDiffHeight, expLenLongestFen == actLenLongestFen && expNumDiffHeight == actNumDiffHeight ? "PASS": " !!!!! FAIL !!!!!");
#endif
  return 0;
}


//-------------------------------------------------------------
//
// func
//
//-------------------------------------------------------------

//-------------------------------------------------------------
void printAr(int* ar, int arLen){
  printf("-------- array ------------\n");
  for (int i = 0; i < arLen; i++){
    printf("%d ", ar[i]);
  }
  printf("\n");

}
//-------------------------------------------------------------
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 


//-------------------------------------------------------------
void getUnique(int src[], int* len){
  //sort(src, *len);
  mergeSort(src, 0, *len-1);
  
  int lastNum = 0;
  int count =1;
  int isFirstUniq = 1;
  
  for (int i=0 ; i<*len; i++){
    if (i==0){
      lastNum = src[i];
    } 
    else {
      if (lastNum != src[i]){
        src[count++] = src[i];
      }
      lastNum = src[i];
    }
  }
  
  *len = count;
}

//-------------------------------------------------------------
// insertion sort - too slow
//-------------------------------------------------------------
void sort(int ar[], int arLen){
  for (int i=0; i<arLen-1; i++){
    for (int j=i+1; j<arLen; j++){
      if (ar[i] > ar[j]){
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
      }
    }
  }
}

//-------------------------------------------------------------
// merge sort
//-------------------------------------------------------------
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}


void getMaxLenAndNumFen(char* inFileName, int* actLongFen, int* actNumDiffH){
  #define BOARD_MAX 1000000

  FILE* in = fopen(inFileName, "r");
  int num;
  fscanf(in, "%d", &num);

  // Read boards
  int board[BOARD_MAX];
  for (int i = 0; i < num; i++){
    fscanf(in, "%d", &board[i]);
  }                                                                    

  // unique board
  int uboard[num];
  int unum = num;
  for (int i =0; i<num; i++){ uboard[i] = board[i]; }
  getUnique(uboard, &unum);

  // All possible sums using unique board
  int uniqueBoardSumNum = unum * (unum-1) / 2;
  int uniqueBoardSum[uniqueBoardSumNum];

  int count = 0;
  if ( unum == 1 ){
    uniqueBoardSum[0] = uboard[0] * 2;
    uniqueBoardSumNum =1;
  }
  else {
    for (int i=0; i<unum -1; i++){
      for (int j=i+1; j<unum ; j++){
        uniqueBoardSum[count++] = uboard[i] + uboard[j];
      }
    }
    getUnique(uniqueBoardSum, &uniqueBoardSumNum);
  }

  mergeSort(board, 0, num-1);

  // For each nuique sum, find two boards repeatedly
  
  int fenLen = 0;
  int fenHeightVariation = 0;

  int cfenLen = 0;    // len

//printAr(board, num);
  for (int sumIdx = 0; sumIdx < uniqueBoardSumNum; sumIdx++){
    id("sumIdx:%d\n", sumIdx);
    for (int i = 0, j = num-1; i < num && i < j; i++){
      id("   sumIdx:%d uniqueBoardSumNum:%d i:%d  j:%d   num:%d\n", sumIdx, uniqueBoardSumNum, i, j, num);
      if ( uniqueBoardSum[sumIdx] == board[i] + board[j] ) {
        cfenLen++;
        j--;
      }
      else { // sum is not found - move j to the left
        int savedJ = j;
        int isFound = 0;
        for ( ; i < j; j--){
          if ( uniqueBoardSum[sumIdx] == board[i] + board[j] ){
            i--;
            isFound = 1;
            break;
          }
          else if ( uniqueBoardSum[sumIdx] > board[i] + board[j] ){ // Speed up
            break;
          }
          else { // Speed up
            for ( ; board[j] == board[j-1]; j--); //{ printf("i is being increased\n"); }
          }
        }

        if ( !isFound ){ // not found - move i to the right
          if (  board[i] == board[i+1] ){ // Speed up
            for ( ; board[i] == board[i+1]; i++); //{ printf("i is being increased\n"); }
          }
          else {
            j = savedJ;
          }
        }
      }  

    } 

    if ( fenLen < cfenLen ){
      fenLen = cfenLen;
      fenHeightVariation = 1;
    }
    else if (fenLen == cfenLen){
      fenHeightVariation++;
    }

    cfenLen = 0;
  } //for

  if (fenLen == 0){
    fenLen = 1;     // len
    fenHeightVariation = uniqueBoardSumNum;
  }

  *actLongFen = fenLen;  
  *actNumDiffH = fenHeightVariation;
}


void getExp(char *outFileName, int* expLenLongestFen, int* expNumDiffHeight){
  FILE* in = fopen(outFileName, "r");
  fscanf(in, "%d", expLenLongestFen);
  fscanf(in, "%d", expNumDiffHeight);
}
