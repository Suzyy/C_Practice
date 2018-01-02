#include <stdio.h>

int main(){

  int age;

  /*do{

    printf("Please enter your age: ");
    scanf("%d", &age);
  } while (!((age >= 10) && (age <= 100)));
*/
 /* printf("Please enter your age: ");
  scanf("%d", &age);
  while(!((age >= 10) && (age <= 100))){
    printf("Please enter your age: ");
    scanf("%d", &age);
  }

  printf("\nYou've entered: %d years\n", age);
*/

  printf("Please enter your age: ");
  scanf("%d", &age);
 
  for(; (!((age >= 10) && (age <= 100)));){
    printf("Please enter your age: ");
    scanf("%d", &age);
  }
  printf("\nYou've entered: %d years\n", age);
  
  return 0;

}
