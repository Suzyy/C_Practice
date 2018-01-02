#include <stdio.h>

int main(){

  int age;

  age = 0;

  while(!(age >= 12 && age <= 100)){

    printf("Please enter your age: ");
    scanf("%d",&age);
    if (!( age >= 12 && age <= 100 )){
      printf("\nYou are joking!");
    }
  }

  printf("You've entered: %d years", age);  
  
  return 0;
}
