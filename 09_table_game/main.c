#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(void)
{
	char gameTable[][5] = {{'_','1','2','3','4'},{'A','_','_','_','_'},{'B','_','_','_','_'},{'C','_','_','_','_'}};
	int m = 4;
	int n = 4;

	int uRow;
	int uCol;

	int counter = 1;

	printTable(m,n, gameTable);
	
	readPlayerOne(&uRow, &uCol);
	writeTable(uRow, uCol, &counter, gameTable);
	printTable(4,4, gameTable);
	printf("selected row: %d selected col: %d \n",uRow, uCol);

	readPlayerTwo(&uRow, &uCol);
	writeTable(uRow, uCol, &counter, gameTable);
	printTable(4,4, gameTable);
	printf("selected row: %d selected col: %d \n",uRow, uCol);

	readPlayerOne(&uRow, &uCol);
	writeTable(uRow, uCol, &counter, gameTable);
	printTable(4,4, gameTable);
	printf("selected row: %d selected col: %d \n",uRow, uCol);

	readPlayerTwo(&uRow, &uCol);
	writeTable(uRow, uCol,&counter, gameTable);
	printTable(4,4, gameTable);
	printf("selected row: %d selected col: %d \n",uRow, uCol);

	readPlayerOne(&uRow, &uCol);
	writeTable(uRow, uCol, &counter, gameTable);
	printTable(4,4, gameTable);
	printf("selected row: %d selected col: %d \n",uRow, uCol);

	return 0;

}
