#include<stdio.h>
#include<conio.h>

void main()
{
	float assignment, labExam, writtenExam;
	float average;

	printf("Please enter your assignment grade\n");
	scanf("%f", &assignment);

	printf("Please enter your Lab Exam grade\n");
	scanf("%f", &labExam);

	printf("Please enter your Written Exam grade\n");
	scanf("%f", &writtenExam);

	// Average result is Exam is 60% ... Lab Exam is 10% ... Assignement is 30%
	average = 0.6*writtenExam + 0.1*labExam + 0.3*assignment;
	printf("Your Average Mark is %.2f. ",average);

	if (average >= 70)
		printf("Your Grade is an A\n");
	else if(average>=60)
		printf("Your Grade is a B\n");
	else if(average >= 50)
		printf("Your Grade is a C\n");
	else if(average >= 40)
		printf("Your Grade is a D\n");
	else
		printf("Your Grade is a E\n");
		



	getch();
}