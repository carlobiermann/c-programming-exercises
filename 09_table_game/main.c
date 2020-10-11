#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(void)
{
	int gameTable[][5] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
	int m = 5;
	int n = 5;

	int uRow;
	int uCol;

	printTable(m,n, gameTable);
	
	readValues(&uRow, &uCol);
	writeTable(uRow, uCol, gameTable);
	printTable(5,5, gameTable);

	readValues(&uRow, &uCol);
	writeTable(uRow, uCol, gameTable);
	printTable(5,5, gameTable);

	readValues(&uRow, &uCol);
	writeTable(uRow, uCol, gameTable);
	printTable(5,5, gameTable);

	return 0;

}
