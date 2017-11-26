#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
// Naqi Ahmad -Project G00332403
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


///all the methods 
void menu();
void menu2();
void GetStatsTwo(int arr[3][9]);
void GetStatsOne(int arr[3][9]);
void GetStatsThree(int arr[3][9]);
void GetStatsFour(int arr[3][9]);
void RandomNumber(int arr[3][9]);
void winOne(int arr[3][9], int val);
void winTwo(int arr[3][9], int val);
void winThree(int arr[3][9], int val);
void winfour(int arr[3][9], int val);

void main()
{
	//variables
	int value, players, value2 = 0;
	int rows = 3, cols = 9;
	int i, j, k;
	FILE* saveGame;FILE* saveGame2;FILE* saveGame3;FILE* saveGame4;FILE* saveGame5;FILE* saveGame6;
	FILE* readGame;FILE* readGame2;FILE* readGame3;FILE* readGame4;FILE* readGame5;FILE* readGame6;
	int arr[3][9];
	char arr2[3][9];
	int arr3[3][9], arr4[3][9], arr5[3][9], arr6[3][9], arr7[3][9], arr8[3][9];
	int count = 1, countPlayer = 1, countPlayer1 = 1;
	int random, random2, countP, getN;

	//asking the users for the number of customers i.e the number of time the loop //runs
	menu();
	scanf("%d", &value);

	//while loop for the the input from the user
	while (value != 3)
	{
		switch (value)
		{
		case 1:

			printf("Starting a new game. Please enter the number of players \n");
			scanf("%d", &players);
			countP = players;
			//to ensure that their can only be 6 players and no more than 6 
			if (players > 6)
			{
				//if the players more then the 6 then the user is asked again for the number of players 
				printf("Their Can only be 6 players! \n");
				printf("Enter the number of players Again \n");
				scanf("%d", &players);
			}

			for (k = 0; k < players; k++)
			{
				printf("\n");
				printf("Player %d\n\n", countPlayer1);
				//depends on number of players 
				countPlayer1++;
				for (i = 0; i < rows; i++)
				{
					for (j = 0; j < cols; j++)
					{
						//randum upto 10 for the first coloumn					
						arr[0][0] = rand() % 9 + 1;; arr[1][0] = rand() % 9 + 1; arr[2][0] = rand() % 9 + 1;

						if (arr[0][0] == arr[1][0])
						{
							arr[0][0] = rand() % 10;
						}
						if (arr[1][0] == arr[2][0])
						{
							arr[1][0] = rand() % 10;


						}
						if (arr[0][0] == arr[2][0])
						{
							arr[2][0] = rand() % 10;
						}//////////////////////////////

						 //randum upto 20 for the second coloumn
						arr[0][1] = -1; arr[1][1] = rand() % 10 + 10; arr[2][1] = rand() % 10 + 10;

						if (arr[1][1] == arr[2][1])
						{
							arr[1][1] = rand() % 10 + 10;
						} /////////////

						  //randum upto 30 for the third coloumn
						arr[0][2] = -1; arr[1][2] = rand() % 10 + 20; arr[2][2] = -1;

						//randum upto 40 for the 4th coloumn
						arr[0][3] = rand() % 10 + 30; arr[1][3] = -1; arr[2][3] = -1;

						//randum upto 50 for the 5th coloumn
						arr[0][4] = -1; arr[1][4] = rand() % 10 + 40; arr[2][4] = rand() % 10 + 40;

						if (arr[1][4] == arr[2][4])
						{
							arr[1][4] = rand() % 10 + 40;
						}///////////

						 //randum upto 60 for the 6th coloumn
						arr[0][5] = rand() % 10 + 50; arr[1][5] = -1; arr[2][5] = -1;

						//randum upto 70 for the 7th coloumn
						arr[0][6] = -1; arr[1][6] = -1; arr[2][6] = rand() % 10 + 60;

						//randum upto 80 for the 8th coloumn
						arr[0][7] = rand() % 10 + 70; arr[1][7] = -1; arr[2][7] = -1;

						//randum upto 90 for the 9th coloumn
						arr[0][8] = rand() % 10 + 80; arr[1][8] = rand() % 10 + 80; arr[2][8] = rand() % 10 + 80;

						if (arr[0][8] == arr[1][8])
						{
							arr[0][8] = rand() % 10 + 80;
						}
						if (arr[1][8] == arr[2][8])
						{
							arr[1][8] = rand() % 10 + 80;
						}
						if (arr[0][8] == arr[2][8])
						{
							arr[2][8] = rand() % 10 + 80;
						}//////////////////////////////

					}
				}
				//this saves all the players in different arrays
				if (countPlayer == 1)
				{
					for (i = 0; i < rows; i++)
					{
						for (j = 0; j < cols; j++)
						{
							arr3[i][j] = arr[i][j];
						}

					}
				}
				//this saves all the players in different arrays
				else if (countPlayer == 2)
				{
					for (i = 0; i < rows; i++)
					{
						for (j = 0; j < cols; j++)
						{
							arr4[i][j] = arr[i][j];
						}

					}
				}
				//this saves all the players in different arrays
				else if (countPlayer == 3)
				{
					for (i = 0; i < rows; i++)
					{
						for (j = 0; j < cols; j++)
						{
							arr5[i][j] = arr[i][j];
						}

					}
				}
				//this saves all the players in different arrays
				else if (countPlayer == 4)
				{
					for (i = 0; i < rows; i++)
					{
						for (j = 0; j < cols; j++)
						{
							arr6[i][j] = arr[i][j];
						}

					}
				}
				//this saves all the players in different arrays
				else if (countPlayer == 5)
				{
					for (i = 0; i < rows; i++)
					{
						for (j = 0; j < cols; j++)
						{
							arr7[i][j] = arr[i][j];
						}

					}
				}
				//this saves all the players in different arrays
				else if (countPlayer == 6)
				{
					for (i = 0; i < rows; i++)
					{
						for (j = 0; j < cols; j++)
						{
							arr8[i][j] = arr[i][j];
						}

					}
				}

				// this is printing all the arrays and the players
				printf("      Col 1  - Col 2 - Col3  - Col4  - Col5  - Col6  - Col7  - Col8  - Col9\n");

				for (i = 0; i < rows; i++)
				{
					//prints rows 
					printf("Row %d: ", count);
					//print the arrays
					for (j = 0; j < cols; j++)
					{
						arr2[i][j] = arr[i][j];

						switch (j)
						{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
						case 6:
						case 7:
						case 8:
							if (arr2[i][j] == -1)
							{
								arr2[i][j] = '*';
								printf("%-5c", arr2[i][j]);
							}
							else {
								printf("%-5d", arr2[i][j]);
							}
							break;

						}// end of switch inside the while

						 //only prints - for the required values
						if (!(arr2[i][j] == arr2[0][8] || arr2[i][j] == arr2[1][8] || arr2[i][j] == arr2[2][8]))
						{
							printf(" - ");
						}

					}
					//for the rows
					count++;
					printf("\n");
				}
				//this sets the rows number to 1 again meaning it only goes up to 3 rows
				count = 1;
				// this adds one to the player depending on how many times the loop runs 
				countPlayer++;

			}//end of first for loop that runs the for loop depending on how many times the user wants
			printf("\n");
			//resets to one i.e number of players
			countPlayer1 = 1;
			////////////////////////////////////////////////////////////////////////////////////////////////////
			//////////////////////////////////////////////////////////////////////////////////////////////////
			//////////second menu
			//ask the what thwy would like 
			menu2();
			scanf("%d", &value2);
			while (value2 != 4) {
				switch (value2) {
				case 1:
					//generate a random number
					random = rand() % 90 + 1;
					//print the random number
					printf("\nThe number %d was drawn\n", random);

					for (i = 0; i < rows; i++)
					{
						for (j = 0; j < cols; j++)
						{
							//check if any of the random number matches the players
							if (random == arr3[i][j]) {
								printf("it matched on the first card\n");
								arr3[i][j] = -1;

							} //check if any of the random number matches the players
							if (random == arr4[i][j])
							{
								printf("it matched on the second card\n");
								arr4[i][j] = -1;
							} //check if any of the random number matches the players
							if (random == arr5[i][j])
							{
								printf("it matched on the third card\n");
								arr5[i][j] = -1;
							} //check if any of the random number matches the players
							if (random == arr6[i][j])
							{
								printf("it matched on the fourth card\n");
								arr6[i][j] = -1;
							} //check if any of the random number matches the players
							if (random == arr7[i][j])
							{
								printf("it matched on the fifth card\n");
								arr7[i][j] = -1;
							} //check if any of the random number matches the players
							if (random == arr8[i][j])
							{
								printf("it matched on the sixth card\n");
								arr8[i][j] = -1;
							}

						}
					}
					//this checks if the arrays and the corners to check the winner
					printf("\n");
					winOne(arr3, 1); winOne(arr4, 2); winOne(arr5, 3); winOne(arr6, 4); winOne(arr7, 5); winOne(arr8, 6);
					winTwo(arr3, 1); winTwo(arr4, 2); winTwo(arr5, 3); winTwo(arr6, 4); winTwo(arr7, 5); winTwo(arr8, 6);
					winThree(arr3, 1); winThree(arr4, 2); winThree(arr5, 3); winThree(arr6, 4); winThree(arr7, 5); winThree(arr8, 6);
					winfour(arr3, 1); winfour(arr4, 2); winfour(arr5, 3); winfour(arr6, 4); winfour(arr7, 5); winfour(arr8, 6);
					printf("\n");
					break;
				case 2:///////////////////////////////////////////////////////save game//only saved 
					   //open all the files
					saveGame = fopen("Output.txt", "w");
					saveGame2 = fopen("Output2.txt", "w");
					saveGame3 = fopen("Output3.txt", "w");
					saveGame4 = fopen("Output4.txt", "w");
					saveGame5 = fopen("Output5.txt", "w");
					saveGame6 = fopen("Output6.txt", "w");
					//write the updated arrays to the files
					printf("Game is saved \n");
					if (countP != 0 && !(countP < 0))
					{
						for (i = 0; i < rows; i++)
						{
							for (j = 0; j < cols; j++)
							{
								arr2[i][j] = arr3[i][j];


								fprintf(saveGame, "%-5d", arr2[i][j]);

							}
							fprintf(saveGame, "\n");
						}
					}
					////brings the count down by 1
					countP--;
					if (countP != 0 && !(countP < 0))
					{
						for (i = 0; i < rows; i++)
						{

							for (j = 0; j < cols; j++)
							{
								arr2[i][j] = arr4[i][j];


								fprintf(saveGame2, "%-5d", arr2[i][j]);

							}
							fprintf(saveGame2, "\n");
						}
					}
					////brings the count down by 1
					countP--;
					if (countP != 0 && !(countP < 0))
					{
						for (i = 0; i < rows; i++)
						{

							for (j = 0; j < cols; j++)
							{
								arr2[i][j] = arr5[i][j];


								fprintf(saveGame3, "%-5d", arr2[i][j]);

							}
							fprintf(saveGame3, "\n");
						}
					}
					////brings the count down by 1
					countP--;
					if (countP != 0 && !(countP < 0))
					{
						for (i = 0; i < rows; i++)
						{

							for (j = 0; j < cols; j++)
							{
								arr2[i][j] = arr6[i][j];


								fprintf(saveGame4, "%-5d", arr2[i][j]);

							}
							fprintf(saveGame4, "\n");
						}
					}
					////brings the count down by 1
					countP--;
					if (countP != 0 && !(countP < 0))
					{
						for (i = 0; i < rows; i++)
						{

							for (j = 0; j < cols; j++)
							{
								arr2[i][j] = arr7[i][j];


								fprintf(saveGame5, "%-5d", arr2[i][j]);

							}
							fprintf(saveGame5, "\n");
						}
					} ////brings the count down by 1
					countP--;
					if (countP != 0 && !(countP < 0))
					{
						for (i = 0; i < rows; i++)
						{

							for (j = 0; j < cols; j++)
							{
								arr2[i][j] = arr8[i][j];


								fprintf(saveGame6, "%-5d", arr2[i][j]);

							}
							fprintf(saveGame6, "\n");
						}
					}

					//close all the files that are open 
					if (saveGame != NULL)
					{
						fclose(saveGame);
					}//close all the files that are open 
					if (saveGame2 != NULL)
					{
						fclose(saveGame2);
					}//close all the files that are open 
					if (saveGame3 != NULL)
					{
						fclose(saveGame3);
					}//close all the files that are open 
					if (saveGame4 != NULL)
					{
						fclose(saveGame4);
					}//close all the files that are open 
					if (saveGame5 != NULL)
					{
						fclose(saveGame5);
					}//close all the files that are open 
					if (saveGame6 != NULL)
					{
						fclose(saveGame6);
					}
					break;
				case 3:
					//print stats for the saved games 
					if (arr3[0][1] == -1) {
						printf("\nplayer requires\n");
						GetStatsOne(arr3);
						GetStatsTwo(arr3);
						GetStatsThree(arr3);
						GetStatsFour(arr3);
						printf("\n");
					}

					/////print stats for the saved games  player 2
					if (arr4[0][1] == -1) {
						printf("player 2 requires\n");
						GetStatsOne(arr4);
						GetStatsTwo(arr4);
						GetStatsThree(arr4);
						GetStatsFour(arr4);
						printf("\n");
					}
					/////print stats for the saved games  player 3
					if (arr5[0][1] == -1) {
						printf("player 3 requires\n");
						GetStatsOne(arr5);
						GetStatsTwo(arr5);
						GetStatsThree(arr5);
						GetStatsFour(arr5);
						printf("\n");
					}
					/////print stats for the saved games  player 4
					if (arr6[0][1] == -1) {
						printf("player 4 requires\n");
						GetStatsOne(arr6);
						GetStatsTwo(arr6);
						GetStatsThree(arr6);
						GetStatsFour(arr5);
						printf("\n");
					}
					/////print stats for the saved games  player 5
					if (arr7[0][1] == -1) {
						printf("player 5 requires\n");
						GetStatsOne(arr7);
						GetStatsTwo(arr7);
						GetStatsThree(arr7);
						GetStatsFour(arr7);
						printf("\n");
					}
					/////print stats for the saved games  player 6
					if (arr8[0][1] == -1) {
						printf("player 6 requires\n");
						GetStatsOne(arr8);
						GetStatsTwo(arr8);
						GetStatsThree(arr8);
						GetStatsFour(arr8);
						printf("\n");
					}
					break;

				}//end of switch
				countPlayer = 1;
				//ask the what thwy would like 
				menu2();
				scanf("%d", &value2);
			}//end of the second while loop inside the switch
			break;
		case 2://////////////////////reload old game/////////////////////////////////

			readGame = fopen("Output.txt", "r");
			readGame2 = fopen("Output2.txt", "r");
			readGame3 = fopen("Output3.txt", "r");
			readGame4 = fopen("Output4.txt", "r");
			readGame5 = fopen("Output5.txt", "r");
			readGame6 = fopen("Output6.txt", "r");


			//for the first player
			for (i = 0; i < rows; i++) {
				for (j = 0; j < cols; j++) {

					fscanf(readGame, "%d\n", &arr3[i][j]);

				}
			}

			//for the second player

			for (i = 0; i < rows; i++) {
				for (j = 0; j < cols; j++) {

					fscanf(readGame2, "%d\n", &arr4[i][j]);

				}
			}

			//for the third player

			for (i = 0; i < rows; i++) {
				for (j = 0; j < cols; j++) {

					fscanf(readGame3, "%d\n", &arr5[i][j]);

				}
			}

			//for the 4th player

			for (i = 0; i < rows; i++) {
				for (j = 0; j < cols; j++) {

					fscanf(readGame4, "%d\n", &arr6[i][j]);

				}
			}
			//for the 5th player

			for (i = 0; i < rows; i++) {
				for (j = 0; j < cols; j++) {

					fscanf(readGame5, "%d\n", &arr7[i][j]);

				}
			}
			//for the 6th player

			for (i = 0; i < rows; i++) {
				for (j = 0; j < cols; j++) {

					fscanf(readGame6, "%d\n", &arr8[i][j]);

				}
			}
			//print out the arrays 
			if (arr3[0][1] == -1)
			{
				printf("Player 1\n");
				//methods prints the arrays
				RandomNumber(arr3);
			}//print out the arrays 
			if (arr4[0][1] == -1)
			{
				printf("Player 2\n");
				RandomNumber(arr4);
				//methods prints the arrays
			}//print out the arrays 
			if (arr5[0][1] == -1)
			{
				printf("Player 3\n");
				RandomNumber(arr5);
				//methods prints the arrays
			}//print out the arrays 
			if (arr6[0][1] == -1)
			{
				printf("Player 4\n");
				RandomNumber(arr6);
				//methods prints the arrays
			}//print out the arrays 
			if (arr7[0][1] == -1)
			{
				printf("Player 5\n");
				RandomNumber(arr7);
				//methods prints the arrays
			}//print out the arrays 
			if (arr8[0][1] == -1)
			{
				printf("Player 6\n");
				RandomNumber(arr8);
				//methods prints the arrays
			}

			menu2();
			scanf("%d", &getN);

			while (getN != 4) {
				switch (getN) {
				case 1:
					//generate random number
					random2 = rand() % 90 + 1;
					//print the random number
					printf("The number %d was drawn\n", random2);

					for (i = 0; i < rows; i++)
					{
						for (j = 0; j < cols; j++)
						{
							//check if array matched the random number 
							if (random2 == arr3[i][j]) {
								printf("it matched on the first card\n");
								arr3[i][j] = -1;

							}
							if (random2 == arr4[i][j])
							{
								printf("it matched on the second card\n");
								arr4[i][j] = -1;
							}
							if (random2 == arr5[i][j])
							{
								printf("it matched on the third card\n");
								arr5[i][j] = -1;
							}
							if (random2 == arr6[i][j]) {
								printf("it matched on the first card\n");
								arr6[i][j] = -1;

							}
							if (random2 == arr7[i][j])
							{
								printf("it matched on the second card\n");
								arr7[i][j] = -1;
							}
							if (random2 == arr8[i][j])
							{
								printf("it matched on the third card\n");
								arr8[i][j] = -1;
							}

						}
					}
					//this checks if the arrays and the corners to check the winner
					printf("\n");
					winOne(arr3, 1); winOne(arr4, 2); winOne(arr5, 3); winOne(arr6, 4); winOne(arr7, 5); winOne(arr8, 6);
					winTwo(arr3, 1); winTwo(arr4, 2); winTwo(arr5, 3); winTwo(arr6, 4); winTwo(arr7, 5); winTwo(arr8, 6);
					winThree(arr3, 1); winThree(arr4, 2); winThree(arr5, 3); winThree(arr6, 4); winThree(arr7, 5); winThree(arr8, 6);
					winfour(arr3, 1); winfour(arr4, 2); winfour(arr5, 3); winfour(arr6, 4); winfour(arr7, 5); winfour(arr8, 6);
					printf("\n");
					break;
				case 2:
					//open the files to write
					saveGame = fopen("Output.txt", "w");
					saveGame2 = fopen("Output2.txt", "w");
					saveGame3 = fopen("Output3.txt", "w");
					saveGame4 = fopen("Output4.txt", "w");
					saveGame5 = fopen("Output5.txt", "w");
					saveGame6 = fopen("Output6.txt", "w");
					// printf("CountP is %d", countP);
					for (i = 0; i < rows; i++)
					{

						for (j = 0; j < cols; j++)
						{

							fprintf(saveGame, "%-5d", arr3[i][j]);

						}
						fprintf(saveGame, "\n");
					}
					//this outputs the array values to the file
					for (i = 0; i < rows; i++)
					{

						for (j = 0; j < cols; j++)
						{
							fprintf(saveGame2, "%-5d", arr4[i][j]);

						}
						fprintf(saveGame2, "\n");
					}
					//this outputs the array values to the file
					for (i = 0; i < rows; i++)
					{

						for (j = 0; j < cols; j++)
						{
							fprintf(saveGame3, "%-5d", arr5[i][j]);

						}
						fprintf(saveGame3, "\n");
					}//this outputs the array values to the file
					for (i = 0; i < rows; i++)
					{

						for (j = 0; j < cols; j++)
						{
							fprintf(saveGame4, "%-5d", arr6[i][j]);

						}
						fprintf(saveGame4, "\n");
					}//this outputs the array values to the file
					for (i = 0; i < rows; i++)
					{

						for (j = 0; j < cols; j++)
						{
							fprintf(saveGame5, "%-5d", arr7[i][j]);

						}
						fprintf(saveGame5, "\n");
					}//this outputs the array values to the file
					for (i = 0; i < rows; i++)
					{

						for (j = 0; j < cols; j++)
						{
							fprintf(saveGame6, "%-5d", arr8[i][j]);

						}
						fprintf(saveGame6, "\n");
					}

					//close all the files
					if (saveGame != NULL)
					{
						fclose(saveGame);
					}
					if (saveGame2 != NULL)
					{
						fclose(saveGame2);
					}
					if (saveGame3 != NULL)
					{
						fclose(saveGame2);
					}
					if (saveGame4 != NULL)
					{
						fclose(saveGame4);
					}
					if (saveGame5 != NULL)
					{
						fclose(saveGame5);
					}
					if (saveGame6 != NULL)
					{
						fclose(saveGame6);
					}

					break;
				case 3:
					//stats for the saved games 
					if (arr3[0][1] == -1) {
						printf("\nplayer requires\n");
						GetStatsOne(arr3);
						GetStatsTwo(arr3);
						GetStatsThree(arr3);
						GetStatsFour(arr3);
						printf("\n");
					}

					///player 2
					if (arr4[0][1] == -1) {
						printf("player 2 requires\n");
						GetStatsOne(arr4);
						GetStatsTwo(arr4);
						GetStatsThree(arr4);
						GetStatsFour(arr4);
						printf("\n");
					}

					///player 3
					if (arr5[0][1] == -1) {
						printf("player 3 requires\n");
						GetStatsOne(arr5);
						GetStatsTwo(arr5);
						GetStatsThree(arr5);
						GetStatsFour(arr5);
						printf("\n");
					}
					///player 4
					if (arr6[0][1] == -1) {
						printf("player 4 requires\n");
						GetStatsOne(arr6);
						GetStatsTwo(arr6);
						GetStatsThree(arr6);
						GetStatsFour(arr6);
						printf("\n");
					}
					///player 5
					if (arr7[0][1] == -1) {
						printf("player 5 requires\n");
						GetStatsOne(arr7);
						GetStatsTwo(arr7);
						GetStatsThree(arr7);
						GetStatsFour(arr7);
						printf("\n");
					}
					///player 5
					if (arr8[0][1] == -1) {
						printf("player 6 requires\n");
						GetStatsOne(arr8);
						GetStatsTwo(arr8);
						GetStatsThree(arr8);
						GetStatsFour(arr8);
						printf("\n");
					}

					break;
				}

				//ask again
				menu2();
				scanf("%d", &getN);
			}//while
			fclose(readGame);
			fclose(readGame2);
			fclose(readGame3);
			fclose(readGame4);
			fclose(readGame5);
			fclose(readGame6);

			break;
		default: printf("Please Enter Between 1 And 3 :) \n");
		}//end of switch

		 //ask the user again
		menu();
		scanf("%d", &value);
		value2 = 0;

	}//end of main while loop

	getch();
}//end
 // this is the first menu method
void menu() {
	printf("Please Enter 1 to Start a New Game \n");
	printf("Please Enter 2 to Reload an old Game \n");
	printf("Please Enter 3 to exit the application \n");
}
//this is the second menu fuction
void menu2() {
	printf("Please Enter 1 to Draw the next number \n");
	printf("Please Enter 2 to Save the game \n");
	printf("Please Enter 3 to Output the game's status \n");
	printf("Please Enter 4 to Exit the game \n");
}
// this method checks if the arrays corners to see how many they need to win
void GetStatsOne(int arr[3][9]) {
	int countStat = 4;
	if (arr[0][0] == -1)
	{
		countStat--;
	}
	if (arr[0][8] == -1)
	{
		countStat--;
	}
	if (arr[2][0] == -1)
	{
		countStat--;
	}
	if (arr[2][8] == -1)
	{
		countStat--;
	}
	printf("%d numbers for the four corners\n", countStat);
}
// this method checks if the arrays first line to see how many they need to win
void GetStatsTwo(int arr[3][9]) {
	int countStat = 5;
	if (arr[0][0] == -1)
	{
		countStat--;
	}
	if (arr[0][3] == -1)
	{
		countStat--;
	}
	if (arr[0][5] == -1)
	{
		countStat--;
	}
	if (arr[0][7] == -1)
	{
		countStat--;
	}
	if (arr[0][8] == -1)
	{
		countStat--;
	}
	printf("%d numbers for the one line\n", countStat);
}
// this method checks if the arrays first line and last line are found to see how many they need to win
void GetStatsThree(int arr[3][9]) {
	int countStat = 10;
	if (arr[0][0] == -1)
	{
		countStat--;
	}
	if (arr[0][3] == -1)
	{
		countStat--;
	}
	if (arr[0][5] == -1)
	{
		countStat--;
	}
	if (arr[0][7] == -1)
	{
		countStat--;
	}
	if (arr[0][8] == -1)
	{
		countStat--;
	}
	if (arr[2][0] == -1)
	{
		countStat--;
	}
	if (arr[2][1] == -1)
	{
		countStat--;
	}
	if (arr[2][4] == -1)
	{
		countStat--;
	}
	if (arr[2][6] == -1)
	{
		countStat--;
	}
	if (arr[2][8] == -1)
	{
		countStat--;
	}
	printf("%d numbers for the two line\n", countStat);
}
//this checks the how many positions we need to win the game fully
void GetStatsFour(int arr[3][9]) {
	int countStat = 15;
	if (arr[0][0] == -1)
	{
		countStat--;
	}
	if (arr[0][3] == -1)
	{
		countStat--;
	}
	if (arr[0][5] == -1)
	{
		countStat--;
	}
	if (arr[0][7] == -1)
	{
		countStat--;
	}
	if (arr[0][8] == -1)
	{
		countStat--;
	}
	if (arr[1][0] == -1)
	{
		countStat--;
	}
	if (arr[1][1] == -1)
	{
		countStat--;
	}
	if (arr[1][2] == -1)
	{
		countStat--;
	}
	if (arr[1][4] == -1)
	{
		countStat--;
	}
	if (arr[1][8] == -1)
	{
		countStat--;
	}
	if (arr[2][0] == -1)
	{
		countStat--;
	}
	if (arr[2][1] == -1)
	{
		countStat--;
	}
	if (arr[2][4] == -1)
	{
		countStat--;
	}
	if (arr[2][6] == -1)
	{
		countStat--;
	}
	if (arr[2][8] == -1)
	{
		countStat--;
	}
	printf("%d  numbers for the full house\n", countStat);
}
//prints the arrays
void RandomNumber(int arr[3][9]) {
	int random, i, j, count = 1;
	int player = 1;
	char arr2[3][9];
	int rows = 3, cols = 9;

	if (arr[0][1] == -1)
	{
		printf("\n");
		printf("      Col 1  - Col 2 - Col3  - Col4  - Col5  - Col6  - Col7  - Col8  - Col9\n");

		for (i = 0; i < rows; i++)
		{
			printf("Row %d: ", count);

			for (j = 0; j < 9; j++)
			{
				arr2[i][j] = arr[i][j];

				switch (j)
				{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
					if (arr2[i][j] == -1)
					{
						arr2[i][j] = '*';
						printf("%-5c", arr2[i][j]);
						printf(" - ");
					}
					else {
						printf("%-5d", arr2[i][j]);
						printf(" - ");
					}
					break;

				}// end of switch inside the while

			}
			//for the rows
			count++;
			printf("\n");
		}
		//this sets the rows number to 1 again meaning it only goes up to 3 rows
		count = 1;
		printf("\n");
	}
	else {
		printf("\nNO MORE SAVED PLAYERS\n\n");
	}

}
//checks if the required postions match and if they win
void winOne(int arr[3][9], int val) {
	if (arr[0][0] == -1 && arr[0][8] == -1 && arr[2][0] == -1 && arr[2][8] == -1) {
		if (val == 1)
		{
			printf("Player 1 ");
		}
		if (val == 2)
		{
			printf("Player 2 ");
		}
		if (val == 3)
		{
			printf("Player 3 ");
		}
		if (val == 4)
		{
			printf("Player 4 ");
		}
		if (val == 5)
		{
			printf("Player 5 ");
		}
		if (val == 6)
		{
			printf("Player 6 ");
		}
		printf("You Win the four corners\n");
	}
}
////checks if the required postions match and if they win
void winTwo(int arr[3][9], int val) {

	if (arr[0][0] == -1 && arr[0][3] == -1 && arr[0][5] == -1 && arr[0][7] == -1 && arr[0][8] == -1) {
		if (val == 1)
		{
			printf("Player 1 ");
		}
		if (val == 2)
		{
			printf("Player 2 ");
		}
		if (val == 3)
		{
			printf("Player 3 ");
		}
		if (val == 4)
		{
			printf("Player 4 ");
		}
		if (val == 5)
		{
			printf("Player 5 ");
		}
		if (val == 6)
		{
			printf("Player 6 ");
		}
		printf("You Win the first line\n");

	}
}
//checks if the required postions match and if they win
void winThree(int arr[3][9], int val) {

	if (arr[0][0] == -1 && arr[0][3] == -1 && arr[0][5] == -1 && arr[0][7] == -1 && arr[0][8] == -1 && arr[2][0] == -1
		&& arr[2][1] == -1 && arr[2][4] == -1 && arr[2][6] == -1 && arr[2][8] == -1) {
		if (val == 1)
		{
			printf("Player 1 ");
		}
		if (val == 2)
		{
			printf("Player 2 ");
		}
		if (val == 3)
		{
			printf("Player 3 ");
		}
		if (val == 4)
		{
			printf("Player 4 ");
		}
		if (val == 5)
		{
			printf("Player 5 ");
		}
		if (val == 6)
		{
			printf("Player 6 ");
		}
		printf("You Win the Two lines\n");

	}

}
//checks if the required postions match and if they win
void winfour(int arr[3][9], int val) {

	if (arr[0][0] == -1 && arr[0][3] == -1 && arr[0][5] == -1 && arr[0][7] == -1 && arr[0][8] == -1 && arr[1][0] == -1 && arr[1][1] == -1
		&& arr[1][2] == -1 && arr[1][4] == -1 && arr[1][8] == -1 && arr[2][0] == -1 && arr[2][1] == -1 && arr[2][4] == -1 && arr[2][6] == -1
		&& arr[2][8] == -1) {
		if (val == 1)
		{
			printf("Player 1 ");
		}
		if (val == 2)
		{
			printf("Player 2 ");
		}
		if (val == 3)
		{
			printf("Player 3 ");
		}
		if (val == 4)
		{
			printf("Player 4 ");
		}
		if (val == 5)
		{
			printf("Player 5 ");
		}
		if (val == 6)
		{
			printf("Player 6 ");
		}
		printf("You Win the Game\n\n");

	}

}