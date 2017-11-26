#include<stdio.h>
#include<conio.h>

int factorial(int number);

void main()
{

	int user_number;
	int result;

	printf("Please enter the number which you would like to calculate the factorial of:\n");
	scanf("%d", &user_number);

	result = factorial(user_number);

	printf("The factorial of %d is: %d", user_number, result);

	getch();
}


int factorial(int number)
{


	int ans;
	
	printf("Factorial function for %d\n", number);

	if (number == 1)
	{
		ans = 1;
		printf("Factorial for 1\n");
	}
	else
	{
		printf("Calling factorial on %d\n", number - 1);
		ans = number*factorial(number - 1);
		printf("Got factorial on %d\n", number - 1);
	}
	return ans;
}