#include<stdio.h>
#include<conio.h>

void pointerfn(int *first, int *second);

void main()
{

	int num1, num2;

	int *a, *b;

	// a hold the address of num1
	a = &num1;

	// b holds the address of num2
	b = &num2;


	// Option 1 to read into num1
	printf("Please enter a value for num1\n");
	scanf("%d", &num1);
	printf("Number 1: %d\n", num1);


	// Option 2 to read into num1
	printf("Please enter a value for num1\n");
	scanf("%d", a);
	printf("Number 1: %d\n", *a);
	printf("Number 1: %d\n", num1);

	num2 = 10;

	printf("Number 1: %d and Number 2: %d before pointer based function\n", num1, num2);

	//because pointers are used the variables are changed in the function
	pointerfn(&num1, &num2);

	printf("Number 1: %d and Number 2: %d after pointer based function\n", num1, num2);

	getch();
}


void pointerfn(int *first, int *second)
{
	printf("Please enter a value for number 1\n");
	scanf("%d", first);

	printf("Please enter a value for number 2\n");
	scanf("%d", second);
}