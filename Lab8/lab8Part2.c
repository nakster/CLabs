#include<stdio.h>
#include<conio.h>

// Declare function prototypes
void Instruction();
float Average(int num1, int num2, int num3);
void Display(float num);

void main()
{
	// Declare Variables
	int number1;
	int number2;
	int number3;
	float numAverage;

	// Call instruction method
	Instruction();

	// Take in three numbers entered by the user
	scanf("%d", &number1);
	scanf("%d", &number2);
	scanf("%d", &number3);

	// Calculate the average by using the Average function
	numAverage = Average(number1, number2, number3);

	// Display the result using the display function
	Display(numAverage);

	getch();
}


void Instruction()
{
	printf("Please enter three integers values\n");
	printf("The program will then display their average\n");
}
float Average(int num1, int num2, int num3)
{
	float aver;

	aver = (float)(num1 + num2 + num3) / 3;

	return aver;

}
void Display(float num)
{
	printf("The average is %f\n", num);
}