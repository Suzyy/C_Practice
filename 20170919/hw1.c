#include<stdio.h>

int numOfChildren;
int numOfAdults;
float cost;
float total;
float HST;

main(){

HST = 0.15;
printf("Please enter the number of children :");
scanf("%d", &numOfChildren);

printf("Please enter the number of adults :");
scanf("%d", &numOfAdults);

cost = numOfChildren * 71.991 + numOfAdults * 79.99;

total = cost * (1+HST);

printf("You are purchasing a ticket for %d children and %d adults\n",numOfChildren, numOfAdults);

printf("Cost before taxes : $%.2f\n ",cost);
printf("Total after taxes : $%.2f\n ",total);

return 0;
}
