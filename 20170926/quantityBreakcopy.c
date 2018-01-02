#include <stdio.h>

main(){

	int quantity;
	float price;
	float discountRate;
	float discountAmount;
	float salesAmount;

	printf("Please enter a quantity: ");
	scanf("%d", &quantity);

	printf("Please enter the price: ");
	scanf("%f", &price);

	if((quantity >= 1)&&(quantity <= 99)){
		discountRate = 0.00;
	}
	else if((quantity >= 100)&&(quantity <= 499)){
		discountRate = 0.05;
	}
	else if((quantity >= 500)&&(quantity <= 999)){
		discountRate = 0.10;
	}
	else if(quantity >= 1000){
		discountRate = 0.15;
	}

	discountAmount = (quantity*price) * discountRate;

	salesAmount = (quantity*price) - discountAmount;

	printf("\n\nSales Information\n");
	printf("=================\n\n");
	printf("Quantity : %d\n",quantity);
	printf("Price : $%.2f\n",price);
	printf("Discount Rate : %.2f\n",discountRate);
	printf("Discount Amount : $%.2f\n",discountAmount);
	printf("Sales Amount : $%.2f\n",salesAmount);

	return 0;
}
