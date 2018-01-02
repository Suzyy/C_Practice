#include <stdio.h>



char first_letter_of_first_name;
int grade_for_test1;
int grade_for_test2;
float  grade_for_finaltest;
main()
{
printf("Please, enter the first letter of your first name");
scanf("%c", &first_letter_of_first_name);

printf("Please, enter the grade for your test one");
scanf("%d", &grade_for_test1);

printf("Please, enter the grade for your test two");
scanf("%d", &grade_for_test2);

printf("Please, enter the grade for your final test");
scanf("%f", &grade_for_finaltest);

printf("The student with the first letter %c\n\n", first_letter_of_first_name);
printf("Test one\t Test two\t Final test\n");
printf("-----------------------------------------------------\n");
printf("%d       \t %d      \t %f      \t\n", grade_for_test1, grade_for_test2, grade_for_finaltest);

}
