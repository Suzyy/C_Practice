#include <stdio.h>

int deterMax(int a, int b, int c);

int main()
{
  int a;
  int b;
  int c;

  printf("Please enter the first number: ");
  scanf("%d",&a);
  
  printf("Please enter the second number: ");
  scanf("%d",&b);

  printf("Please enter the third number: ");
  scanf("%d",&c);

  int deterMax(a,b,c);
}
int deterMax(int a, int b, int c)
{
  int high;
  int med;
  int low;

  if(a<=b) {
    if(a<=c) {
      if(b<=c) {
        high = c;
        med = b;
        low = a;
      }
      else  {
        high = b;
        med = c;
        low = a;
      }
    }
    else  { 
      high = b;
      med = a;
      low = c;
    }
  }

  else if(b<=a) {
    if(b<c) {
      if(a<c) {
        high = c;
        med = a;
        low = b;
      }
      else if(c<a) {
        high = a;
        med = c;
        low = b;
      }
    }
    else if(c<b) {
      high = a;
      med = b;
      low = c;
    }
  }
  else if(a<c) {
    if(a<b) {
      if(c<b) {
        high = b;
        med = c












    
    




  if(a<b)
  {
    if
