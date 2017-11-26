#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{

	FILE* outp;
	FILE* ip;
	int number1;
	float number2;
	char letter;
	char name[20];

	outp = fopen("Output.txt","w");

	if (outp == NULL)
	{
		printf("File cannot be opened\n");
	}

	printf("Please enter an integer\n");
	scanf("%d", &number1);

	printf("Please enter a float\n");
	scanf("%f", &number2);

	printf("Please enter a char\n");
	scanf("%c", &letter);
	scanf("%c", &letter);

	printf("Please enter a string\n");
	scanf("%s", name);

	printf("The input was %d, %f, %c, %s\n",number1, number2, letter, name);

	if (outp != NULL)
	{
		fprintf(outp,"%d %f %c %s\n", number1, number2, letter, name);
	}


	if (outp != NULL)
	{
		fclose(outp);
	}

	getch();
}