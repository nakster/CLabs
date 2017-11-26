#include <stdio.h>
#include <string.h>
void main()
{
	int day, month, year;
	int leapYear = 0;
	int dayNum, dayTotal;
	
	
	printf("Please Enter the day, Remember to enter a 0 to exit\n");
	scanf("%d", &day);
	printf("Please Enter the month\n");
	scanf("%d", &month);
	printf("Please Enter the year\n");
	scanf("%d", &year);

	while (day > 0)
	{
		///Find out if it a leap year....
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			leapYear = 1;
		}

		/// Calculate number of days
		if (month == 1)
		{
			dayNum = 0;
		}

		else if (month == 2)
		{
			dayNum = 31;

		}

		else if (month == 3)
		{
			dayNum = 59;

		}

		if (leapYear == 1 && month > 2)
			dayTotal = day + dayNum + leapYear;
		else
			dayTotal = day + dayNum;

		if(leapYear!=1&&month==2&&day==29)
			printf("There are not 29 days in Feb this year\n");
		else
			printf("Total Days %d\n", dayTotal);

		printf("Please Enter the day, Remember to enter 0 to exit\n");
		scanf("%d", &day);
		printf("Please Enter the month\n");
		scanf("%d", &month);
		printf("Please Enter the year\n");
		scanf("%d", &year);
	}
	getch();
}
