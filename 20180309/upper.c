#include <stdio.h>

void upper(char low, char* up){
  if(!('a'<=low)&&(low<='z')){
    *up = low;
  }
  else{
    *up = low - ('a'-'A');
  }
}

int main(){
  char low;
  char* up;
  char box;
  up = &box;

  printf("Please enter a lowercase letter: ");
  scanf("%c", &low);

  //low = 'g';

  //printf("%c\n", low);

  upper(low, up);

  printf("Upper case is : %c\n", *up);

  return 0;
}
  
