#include <stdio.h>

main(){

  int door;

  printf("Pick a door (just type 1, 2, or 3): ");
  scanf("%d", &door);

  switch(door){

    case 1: printf ("/nYou win a new car!");
        break;
    case 2: printf("/nYou win $100!");
        break;
    case 3: printf("/nSorry, you win a bag of dirt!");
        break;
    default: printf("You must select either 1, 2 or 3. Try again...");
  }

  return 0;
}
