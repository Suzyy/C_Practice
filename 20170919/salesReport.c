#include <stdio.h>

int main(){
	int itemsSold;
	float itemsPrice;
	float total;
	float GST;
	float PST;

	GST = 0.05;
	PST = 0.08;
	
	printf("Please enter the number of items sold : ");
	scanf("%d",&itemsSold);
	
	printf("\nPlease enter item's price : ");
	scanf("%f",&itemsPrice);

	total = (itemsSold * itemsPrice) * (1 + GST + PST);

	printf("\nThe Grand Sales Total is : $%.2f\n",total);
}	
