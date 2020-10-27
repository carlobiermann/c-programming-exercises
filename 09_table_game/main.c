#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "functions.h"

int main()
{
	game tictactoe;

	int i,j;

	tictactoe.nGames = 0;
	tictactoe.playerOneScore = 0;
	tictactoe.playerTwoScore = 0;
	tictactoe.tracker = 1;

	tictactoe.table[0][0] = ' ';
	tictactoe.table[1][0] = '1';	
	tictactoe.table[2][0] = '2';
	tictactoe.table[3][0] = '3';

	tictactoe.table[0][1] = 'A';
	tictactoe.table[0][2] = 'B';
	tictactoe.table[0][3] = 'C';

	for(i=1; i < 4; i++){
		for(j=1; j < 4; j++)
			tictactoe.table[i][j] = '_';
	}

	printGame(&tictactoe);

/*
	int uRow;
	int uCol;

	do{	
		readField(&uRow, &uCol, &tictactoe);
	} while (occupied(uRow, uCol, &tictactoe));
	
	writeTable(uRow, uCol, &tictactoe);
	printGame(&tictactoe);


	do{
	 	readField(&uRow, &uCol, tracker);
	} while (occupied(uRow, uCol, gameTable));

	writeTable(uRow, uCol, &tracker, gameTable);
	printTable(4,4, gameTable);
*/
	return 0;

}
