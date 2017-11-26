#include<string.h>
#include<stdio.h>
#include<conio.h>

void main()
{

	// Declare variables
	char string1[50];
	char string2[50];
	int number, compare;

	// Ask  user to enter two strings and a number
	printf("Please Enter String One\n");
	scanf("%s", string1);

	printf("Please Enter String Two\n");
	scanf("%s", string2);

	printf("Please Enter a number\n");
	scanf("%d", &number);

	// Display both strings and their lengths
	printf("The length of string 1 is %d\n", strlen(string1));
	printf("String 1 is %s\n", string1);
	printf("The length of string 2 is %d\n", strlen(string2));
	printf("String 2 is %s\n", string2);

	// Compare the complete strings and display which string is smaller
	compare = strcmp(string1, string2);

	if (compare == 0)
		printf("Strings are equal\n");
	else if (compare < 0)
		printf("String1 is smaller\n");
	else if (compare > 0)
		printf("String 1 is larger\n");

	// Compare the first "number" of characters in the strings and display which string is smaller
	compare = strncmp(string1, string2,number);

	if (compare == 0)
		printf("Sub Strings are equal\n");
	else if (compare < 0)
		printf("Sub String1 is smaller\n");
	else if (compare > 0)
		printf("Sub String 1 is larger\n");

	//Concatenate string2 to string1 and display both strings
	strcat(string1, string2);

	printf("String 1 is %s\n", string1);
	printf("String 2 is %s\n", string2);

	//Concatenate the first three characters of string2 to string1 and display both strings
	strncat(string1, string2, 3);

	printf("String 1 is %s\n", string1);
	printf("String 2 is %s\n", string2);

	//Copy string2 to string and display both strings
	strcpy(string1, string2);

	printf("String 1 is %s\n", string1);
	printf("String 2 is %s\n", string2);

	//Copy the first three characters of string1 to string2 and display both strings
	strncpy(string2, string1, 3);

	string2[3] = '\0';
	printf("String 1 is %s\n", string1);
	printf("String 2 is %s\n", string2);

	getch();
}