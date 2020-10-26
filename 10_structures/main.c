#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


int main()
{
	gameStruct tictactoe;

	int i,j;

	tictactoe.score = 1;
	tictactoe.table[0][0] = ' ';
	tictactoe.table[1][0] = 'A';
	tictactoe.table[2][0] = 'B';
        tictactoe.table[3][0] = 'C';

	tictactoe.table[0][1] = '1';
	tictactoe.table[0][2] = '2';
	tictactoe.table[0][3] = '3';

	for(i=1; i < 4; i++){
		for(j=1; j < 4; j++)
	       tictactoe.table[i][j] = '_';
	}

	printGame(&tictactoe);	
	editGame(&tictactoe);
	printGame(&tictactoe);

}
