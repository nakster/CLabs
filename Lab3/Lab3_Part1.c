#include <stdio.h>
#include <string.h>
void main()
{
	int day, month, year;
	int leapYear = 0;
	int dayNum, dayTotal;

	// Ask the user for the year, month and day
	printf("Please Enter the day, Remember to enter a 0 to exit\n");
	scanf("%d", &day);
	printf("Please Enter the month\n");
	scanf("%d", &month);
	printf("Please Enter the year\n");
	scanf("%d", &year);


	///Find out if it a leap year....
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
			leapYear = 1;
	}

	    
		/// Calculate number of days before the start of the given month
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

		else if (month == 4)
		{
			dayNum = 90;
		}

		else if (month == 5)
		{
			dayNum = 120;
		}

		else if (month == 6)
		{
			dayNum = 151;
		}

		else if (month == 7)
		{
			dayNum = 181;
		}

		else if (month == 8)
		{
			dayNum = 212;
		}

		else if (month == 9)
		{
			dayNum = 243;
		}

		else if (month == 10)
		{
			dayNum = 273;
		}

		else if (month == 11)
		{
			dayNum = 304;

		}

		else if (month == 12)
		{
			dayNum = 334;

		}

		/// If it is a leap and beyond Feb then add a day for the 29th Feb
		if (leapYear == 1 && month > 2)
			dayTotal = day + dayNum + leapYear;
		else
			dayTotal = day + dayNum;

		//If someone enters the 29th Feb on a non leap year then print an error
		if (leapYear != 1 && month == 2 && day == 29)
			printf("There are not 29 days in Feb this year\n");
		else
			// Print the Total days
			printf("Total Days %d\n", dayTotal);

		
	
		getch();
}