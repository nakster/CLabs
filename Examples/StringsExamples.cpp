#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<stdio.h>
#include<conio.h>

#include<string.h>

void main()
{
	int result;
	char name[20];
	char name2[20];
	char name3[20];


	printf("Please enter a string\n");
	scanf("%s", name);
	scanf("%s", name2);


	printf("%s", name);


	result = strlen(name);

	printf("String 1 length is %d", strlen(name));
	printf("String 1 length is %d", result);


	result = strcmp(name, name2);

	if (result == 0)
	{
		printf("Both strings are the same");
	}

	else if (result >= 1)
		printf("Name 1 is bigger");

	else if (result <= -1)
		printf("Name 2 is bigger");

	result = strncmp(name, name2, 3);



	strcat(name, name2);
	printf("\n%s %s", name, name2);


	result = strlen(name);
	strncat(name, name2, 3);
	name[result + 3] = '\0';
	printf("\n%s %s", name, name2);

	strcpy(name, name2);

	printf("\n%s %s", name, name2);


	strcpy(name, "Tommy");
	strcpy(name2, "John");

	strncpy(name, name2, 3);
	name[3] = '\0';
	printf("\n%s", name);
	getch();
}