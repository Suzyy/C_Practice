#include <stdio.h>

main(){

  int mark;
  
  printf("Please enter your mark (0-100): ");
  scanf("%d", &mark);

  if(( mark >= 90) && (mark <= 100)){
    printf("/nYou get an A+");
  }
  else if ((mark >= 80) && (mark <= 89)){
    printf("/nYou get an A");
  }
  else if ((mark >= 75) && (mark <= 80)){
    printf("/nYou get a B+");
  }
  else if ((mark >= 70) && (mark <= 74)){
    printf("/nYou get a B");
  }
  else if ((mark >= 65) && (mark <= 69)){
    printf("/nYou get a C+");
  }
  else if ((mark >= 60) && (mark <= 64)){
    printf("/nYou get a C");
  }
  else if ((mark >= 55) && (mark <= 59)){
    printf("/nYou get a D");
  }
  else{
    printf("/nYou get an F");
  }

  return 0 ;
}
