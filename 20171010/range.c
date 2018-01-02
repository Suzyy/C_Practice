#include <stdio.h>

main(){

  int x;
  int y;
  int number;

  printf("Please enter lower range boundary: ");
  scanf("%d", &x);

  printf("/nPlease enter higher range boundary: ");
  scanf("%d", &y);

  printf("/nPlease enter a number: ");
  scanf("%d", &number);

  if((x <= number) && (number <= y)){
    printf("/nThe number you selected is INSIDE the range.");
  }
  else{
    printf("/nThe number you selected is OUTSIDE the range.");
  }

  return 0;

}
