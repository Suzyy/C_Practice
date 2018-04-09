#include <stdio.h>

int main(){
  int isgood = 0;
  double sales[5];
  char c = 0;

  //ask user for sales amount
  for(int i = 0; i < 5; i++){
    printf("Enter sales amount for store #%d: ",i);
    isgood =( 1 == scanf("%lf", &sales[i]) );

    //check if char is mixed - ask user to re enter
    //while(isgood == 0){
    while(!isgood){

      //clear buffer
      while(c != '\n'){
        c = getchar();
      }
      printf("Invalid sales amount - Enter sales amount for store #%d: ",i);
      isgood = (1 == scanf("%lf", &sales[i]));
      c = 0;
    }
  }

  //print user's monthly sales report
  for(int i = 0; i<5; i++){
    printf("Store #%d : $%.2lf\n", i, sales[i]);
  }

  return 0;
}
