#include<stdio.h>
#include<conio.h>

#define COUNT 20

void main()
{
	// Declare variables
	int array[COUNT];
	int count;
	int sum=0;
	int value;
	float average;
	int i;

	// Ask users to enter "COUNT" variables and put them in an array
	// Keep a running total on the sum
	for(i = 0;i < COUNT;i++)
	{
		printf("Please enter a number\n");
		scanf("%d", &array[i]);
		sum += array[i];
		
	}

	// Calculate the average
	average = (float)sum / COUNT;

	// Go through the array and display the values in the array less than the average.
	for (i = 0;i < COUNT;i++)
	{
		if (array[i] < average)
		{
			printf("\nValue %d is less that the average %d", i, array[i]);
		}

	}

	getch();
}