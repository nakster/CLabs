#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int ChangeGrade(char id[], char filename[]);

void main()
{

	char id[10];
	char file[20];

	printf("Please enter the ID\n");
	scanf("%s", id);

	printf("Please enter the filename\n");
	scanf("%s", file);

	ChangeGrade(id, file);

	getch();

}


int ChangeGrade(char id[], char filename[])
{
	FILE* fp;
	char line[998];
	char temp[20];
	int position_before;
	int numberbytesread;
	int current_position;
	int totallen;

	fp = fopen(filename, "r+");

	if (fp == NULL)
	{
		return -1;
	}

	else
	{
		while (!feof(fp))
		{
			position_before = ftell(fp);

	
			fgets(line, 998, fp);

			puts(line);

			numberbytesread = strlen(line);

			printf("%d\n", numberbytesread);

			printf("%d\n", ftell(fp));

			getch();
			
			if (strncmp(line, id, 9) == 0)
			{
				fseek(fp, position_before, SEEK_SET);
				// Alternative option
				//fseek(fp, -numberbytesread, SEEK_CUR);

				totallen = 0;

				printf("%d\n", ftell(fp));

				getch();

				while (totallen < numberbytesread)
				{
					fscanf(fp, "%s", temp);

					puts(temp);

					printf("%d\n", ftell(fp));


					totallen += strlen(temp);

					totallen++;

					printf("%d\n", totallen);

					getch();

					if (strlen(temp) == 1)
					{
						printf("In file rewrite %d\n",totallen);
						line[totallen - 2] = 'A';
						
					}



				}

				fseek(fp, position_before, SEEK_SET);
				printf("%ld %d, %d\n", ftell(fp), position_before, strlen(line));
				fprintf(fp, "%s", line);
				fflush(fp);
				puts(line);
				//printf("End\n");
				getch();
			}
		}

		
		fclose(fp);
		return 1;
	}
}