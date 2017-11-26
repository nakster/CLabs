#include<stdlib.h>
#include<stdio.h>
#include<conio.h>



void main()
{
	int *a;
	int sizeofArray;

	int** array2;
	int rows;
	int cols;
	int i,j;


	printf("Please enter the size of the 1D array\n");
	scanf("%d", &sizeofArray);

	a = (int*)malloc(sizeofArray * sizeof(int));

	scanf("%d", a); /// equivalent to &a[0]
	scanf("%d", (a + 5)); /// equivalent to &a[5]

	printf("%d\n", *(a + 5));

	rows = 2;
	cols = 3;

	array2 = (int**)malloc(rows * sizeof(int*));

	for (i = 0;i < rows;i++)
	{
		array2[i] = (int*)malloc(cols * sizeof(int));
	}

	printf("Please enter row 0 col 2\n");
	scanf("%d", (*(array2+0)+2)); ////&array2[0][2];
	printf("%d\n", *(*(array2 + 0) + 2)); ////array2[0][2];


	getch();


}


