#include<stdio.h>
#include<conio.h>

void main()
{

	int value;
	int sum=0;
	int smallest;
	int largest;
	int count=0;
	float average;


	// Take in the first value
	printf("Enter a value\n");
	scanf("%d", &value);

	// First value is the smallest and biggest
	smallest = value;
	largest = value;

	// Continue the loop while value is not -1 
	while (value != -1)
	{

		// Add to the sum and increment the count of number of values entered
		sum += value;
		count++;

		// IF value is bigger than biggest or smaller than smallest change the approporiate values
		if (value > largest)
			largest = value;

		if (value < smallest)
			smallest = value;

		// Ask user to enter the next value
		printf("Enter a value\n");
		scanf("%d", &value);

	}

	// Calculate the average
	average = sum / (float)count;

	// Display the results
	printf("Total %d", sum);
	printf("Average %f", average);
	printf("Largest %d", largest);
	printf("Smallest %d", smallest);
	printf("Count %d", count);

	getch();
}