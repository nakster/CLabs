#include<stdio.h>
#include<conio.h>

void display_notice();

int largest_number(int num1, int num2);

void main()
{
	int num1, num2;
	int result;

	display_notice();

	scanf("%d %d", &num1, &num2);

	printf("MainCode: Num 1 before largest method: %d\n", num1);
	
	result = largest_number(num1, num2);

	printf("MainCode: Num 1 after largest method: %d\n", num1);

	printf("Result %d", result);

	getch();
}


void display_notice()
{
	printf("Welcome to the program which helps you calculate the largest number!!!!!!\n");
	printf("Please enter two numbers seperated by a space and ending with a return\n");

}


int largest_number(int num1, int num2)
{
	printf("Largest Number: Num 1 at the start of the method: %d\n", num1);
	num1 = num1 * 2;
	printf("Largest Number: Num 1 : %d\n", num1);


	if (num1 == num2)
		return -1;
	else if (num1 > num2)
		return num1;
	else
		return num2;

}