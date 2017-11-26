#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


typedef struct
{
	char name[20];
	int height;
	int weight;
}human_t;


void main()
{

	FILE* filep;
	human_t human_record;
	int empty = 0;
	int result;

	filep = fopen("Human.txt", "r");

	if (filep == NULL)
	{
		printf("The file cannot be opened to read\n");
		empty = 1;
	}

	else
	{
		while (!feof(filep))
		{
			result = fscanf(filep, "%s %d %d", human_record.name, &human_record.weight, &human_record.height);
			
			if(result>0)
				printf("%s %d %d\n", human_record.name, human_record.weight, human_record.height);
		}
	
		fclose(filep);
	}

	


	////Reading in new data and writing it to file

	filep = fopen("Human.txt", "a");

	printf("Please enter the person height\n");
	scanf("%d", &human_record.height);

	printf("Please enter the person weight\n");
	scanf("%d", &human_record.weight);

	printf("Please enter the person name\n");
	scanf("%s", human_record.name);

	if (filep != NULL)
	{
		fprintf(filep, "%s %d %d\n", human_record.name, human_record.weight, human_record.height);
	}

	printf("Please enter the person height\n");
	scanf("%d", &human_record.height);

	printf("Please enter the person weight\n");
	scanf("%d", &human_record.weight);

	printf("Please enter the person name\n");
	scanf("%s", human_record.name);

	if (filep != NULL)
	{
		fprintf(filep, "%s %d %d\n", human_record.name, human_record.weight, human_record.height);
	}


	if (filep != NULL)
		fclose(filep);

	getch();
}