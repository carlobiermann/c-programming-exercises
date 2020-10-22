#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "functions.h"

int main(void)
{
	char gameTable[][4] = {{' ','1','2','3'},{'A','_','_','_'},{'B','_','_','_'},{'C','_','_','_'}};
	int m = 4;
	int n = 4;

	int uRow;
	int uCol;

	int tracker = 1;

	printTable(m,n, gameTable);

	do{	
		readField(&uRow, &uCol, tracker);
	} while (occupied(uRow, uCol, gameTable));
	
	writeTable(uRow, uCol, &tracker, gameTable);
	printTable(4,4, gameTable);

	do{
	 	readField(&uRow, &uCol, tracker);
	} while (occupied(uRow, uCol, gameTable));

	writeTable(uRow, uCol, &tracker, gameTable);
	printTable(4,4, gameTable);

	return 0;

}
