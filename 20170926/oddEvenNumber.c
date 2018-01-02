#include <stdio.h>

main(){

	int number;

	printf("Please enter a number: ");
	scanf("%d",&number);

	if(number % 2 == 0)
	{
		printf("The number %d is even\n",number);
	}
	else
	{
		printf("The number %d is odd\n",number);
	}

	return 0;
}
