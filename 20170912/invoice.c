#include <stdio.h>

int main(){
	int itemsSold;
	float itemsPrice;
	double totalSales;
	float PST;
	float GST;

	itemsSold = 57;
	itemsPrice = 12.67;
	PST = 0.08;
	GST = 0.05;

	totalSales = (itemsSold*itemsPrice) * (1+PST+GST);

	printf ("Total sales (including taxes) is : $%.2lf\n", totalSales);
	return 0;
}	
