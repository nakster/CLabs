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

	ip = fopen("Output.txt", "r");

	if (ip == NULL)
	{
		printf("File cannot be opened\n");
	}

	if (ip != NULL)
	{
		fscanf(ip, "%d %f %c %s", &number1, &number2, &letter, name);
		printf("I just read in %d %f %c %s", number1, number2, letter, name);
		fclose(ip);
	}

	getch();
}