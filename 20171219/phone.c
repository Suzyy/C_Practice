/*
Name:
Student number:
Email:
Workshop:
Section:
Date:
*/

#include <stdio.h>
#define MAXPHONENUM 3



/* main program */
int main(void) {

  int option;


  printf("---=== Phone Numbers ===---\n\n");

  do {
    // Display the Option List
    printf("1. Display Phone List\n");
    printf("2. Add a Number\n");
    printf("0. Exit\n\n");
    printf("Please select from the above options: ");
    scanf("%d", &option);
    printf("\n");

    switch (option) {
    case 0: // Exit the program


      break;
    case 1: // Display the Phone List
        // @IN-LAB
      printf("Phone Numbers\n");
      printf("==============\n");
      // Display each number in decomposed form





    case 2: // Add a Phone Number
        // @IN-LAB
      printf("Add a Number\n");
      printf("============\n");



    default:

    }

  } while (option != 0);

  return 0;
}


