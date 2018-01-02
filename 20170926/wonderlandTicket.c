#include <stdio.h>

int main(){

	int age;

	printf("Please enter your child's age: ");
	scanf("%d",&age);

	if(age < 6){
		printf("You get a free ticket\n");
	}
	else if ((age > 5) && (age < 12)){
		printf("You get 10%% discount\n");
	}
	else if (age >= 12){
		printf("Error. Your child has to purchase an adult ticket\n");
	}

	switch (age){
		case 1 :
		case 2 :
		case 3 :
		case 4 :
		case 5 :
			printf("You get a free ticket\n");
			break;
		case 6 :
		case 7 :
		case 8 :
		case 9 :
		case 10 :
		case 11 :
			printf("You get 10%% discount\n");
			break;
		default : 
			printf("Error. Your child has to purchase an adult ticket\n");
			break;
	}
	return 0;
}

