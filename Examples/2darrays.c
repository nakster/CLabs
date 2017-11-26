#include<stdio.h>
#include<conio.h>

void main()
{
	int chart[3][3];
	int chart_result[3][3];
	int i;
	int j;

	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			///// Read the matrix......
			////  printf("%d %d\n", i, j);

			printf("Please enter the value for Row %d Column %d\n", i, j);
			scanf("%d", &chart[i][j]);

		}
	}


	for (i =0;i < 3;i++)
	{

		printf("Row %d: ",i);

		for (j = 0;j < 3;j++)
		{
			///// Read the matrix......
			printf("%d ", chart[i][j]);

		}

		printf("\n");
	}


	for (i = 0;i < 3;i++)
	{



		for (j = 0;j < 3;j++)
		{
			if (chart[i][j] % 2 == 1)
			{
				chart_result[i][j] = 0;
			}

			else
			{
				//chart_result[i][j] = chart[i][j] + chart[i][j];
				chart_result[i][j] = chart[i][j] * chart[i][j];

			}

		}

	}


	printf("Chart Result\n");

	for (i = 0;i < 3;i++)
	{

		printf("Row %d: ", i);

		for (j = 0;j < 3;j++)
		{
			///// Read the matrix......
			printf("%d ", chart_result[i][j]);

		}

		printf("\n");
	}
	getch();
}