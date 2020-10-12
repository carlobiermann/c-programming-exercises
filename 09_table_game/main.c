#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(void)
{
	int gameTable[][5] = {{0,1,2,3,4},{1,0,0,0,0},{2,0,0,0,0},{3,0,0,0,0},{4,0,0,0,0}};
	int m = 5;
	int n = 5;

	int uRow;
	int uCol;

	printTable(m,n, gameTable);
	
	readValues(&uRow, &uCol);
	writeTable(uRow, uCol, gameTable);
	printTable(5,5, gameTable);
	printf("selected row: %d selected col: %d \n",uRow, uCol);

	readValues(&uRow, &uCol);
	writeTable(uRow, uCol, gameTable);
	printTable(5,5, gameTable);
	printf("selected row: %d selected col: %d \n",uRow, uCol);

	readValues(&uRow, &uCol);
	writeTable(uRow, uCol, gameTable);
	printTable(5,5, gameTable);
	printf("selected row: %d selected col: %d \n",uRow, uCol);

	return 0;

}
