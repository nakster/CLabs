#include<stdio.h>
#include<conio.h>

void main()
{

	float totalWidth;
	float tileWidth;
	int numberTiles;
	float gap;

	// Ask user for the input
	printf("Please enter the total width\n");
	scanf("%f", &totalWidth);

	printf("Please enter the tile width\n");
	scanf("%f", &tileWidth);

	
	// Get integer number of tiles decimal part is lost
	numberTiles = totalWidth / tileWidth;

	// To get the correct combination of tiles we need the number of tiles to be odd
	// If even number of tiles fit then remove a tile...
	if (numberTiles % 2 == 0)
		numberTiles -= 1;

	// Gap at either end is space not occupied by the tiles divided by 2
	gap = (totalWidth - tileWidth*numberTiles) / 2;

	//Display the result
	printf("The number of tiles is %d\n", numberTiles);
	printf("The gap is %f\n", gap);

	getch();


}