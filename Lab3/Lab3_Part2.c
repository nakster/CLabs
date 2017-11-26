#include<stdio.h>
#include<conio.h>

void main()
{

	float value1, value2;
	char arithmetic;
	float answer;


	// Ask the user for the number inputs and the numeric opeartion
	printf("Please Enter Float\n");
	scanf("%f", &value1);

	printf("Please Enter Float\n");
	scanf("%f", &value2);

	printf("Please Enter The Operation Type\n");
	printf("A for addition\n");
	printf("S for subtraction\n");
	printf("M for multiplication\n");
	printf("D for division\n");
	scanf(" %c", &arithmetic);


	// Switch statement to check which operation to complete
	// Cast the charachter to uppercase in case the user enters
	// a lower case character
	switch (toupper(arithmetic))
	{
	case 'A':
	
		answer = value1 + value2;
		break;
	case 'S':
		answer = value1 - value2;
		break;
	case 'M':
		answer = value1 * value2;
		break;
	case 'D':
		answer = value1 / value2;
		break;
	default:
		answer = -9999;
	}

	// Output the answer
	printf("Answer is %f", answer);
	

	getch();

}