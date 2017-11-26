#include<stdio.h>
#include<conio.h>

void main()
{
	// Declare the three matricies and the loop counters
	int array1[3][3];
	int array2[3][3];
	int sum[3][3];
	int i, j;

	/// Use loop to get first matrix
	for (i = 0;i < 3;i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Please enter row %d and column %d of matrix one\n", i+1, j+1);
			scanf("%d", &array1[i][j]);
		}
	}

	/// Use loop to get second matrix
	for (i = 0;i < 3;i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Please enter row %d and column %d of matrix two\n", i+1, j+1);
			scanf("%d", &array2[i][j]);
		}
	}

	printf("The sum of the arrays is:\n ");

	/// Use loop to get sum matrix and display the answer
	for (i = 0;i < 3;i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
		{
			sum[i][j] = array1[i][j] + array2[i][j];
			printf("%d ", sum[i][j]);
		}
	}

	getch();
}