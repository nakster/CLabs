#include<stdio.h>
#include<conio.h>

void main()
{

	int number;
	int factorial;
	int i;

	// Ask the user to enter the value for the factorial calculation
	printf("Please enter the number you wish to calculate the factorial of\n");
	scanf("%d", &number);

	// If number is 0 then factorial is 1
	if (number == 0)
	{
		factorial = 1;
		printf("%d", factorial);
	}
	else if (number > 0)
	{
		// factorial is initialised to the number
		factorial = number;

		// Create a loop to multiply number * number-1 *.....*1
		for (i = number - 1;i > 0;i--)
		{
			factorial *= i;
		}
		//Display the result
		printf("%d", factorial);
	}
	
	else
	{

		printf("Invalid Entry\n");
	}

	getch();
}

