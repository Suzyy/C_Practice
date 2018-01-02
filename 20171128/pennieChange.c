#include<stdio.h>

void giveChange(int total, int *penn, int *loon);

int main()
{
  int total;
  int penn;
  int loon;

  printf("Please enter total amount of pennies: ");
  scanf("%d", &total);

  giveChange(total, &penn, &loon);
  
  printf("Loonies: %d, pennies: %d", loon, penn);

  return 0;
}
void giveChange(int total, int *penn, int *loon)
{
  *loon = total / 100;
  *penn = total % 100;
}
