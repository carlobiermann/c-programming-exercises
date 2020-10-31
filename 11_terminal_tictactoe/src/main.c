#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "functions.h"


int main()
{
	/* GAME INIT*/
	game tictactoe;
	int r,c;

	bool status = true;
	char mode = '\0';

	tictactoe.gamesPlayed = 0;
	tictactoe.playerOneScore = 0;
	tictactoe.playerTwoScore = 0;
	tictactoe.tracker = 1;

	tictactoe.playerRow = 0;
	tictactoe.playerCol = 0;
	tictactoe.lastMove = 0;

	tictactoe.table[0][0] = ' ';
	tictactoe.table[1][0] = 'A';
	tictactoe.table[2][0] = 'B';
	tictactoe.table[3][0] = 'C';

	tictactoe.table[0][1] = '1';
	tictactoe.table[0][2] = '2';
	tictactoe.table[0][3] = '3';

	for(r=1; r < 4; r++){
		for(c=1; c < 4; c++)
			tictactoe.table[r][c] = '_';
	}

	/* MAIN GAME ROUTINE */
	while(status) {
		printf("\n");
		printf("**** To START a game of TIC TAC TOE type 'S' and hit [ENTER] **** \n");
		printf("**** To EXIT program type 'X' and hit [ENTER]                **** \n");

		readMode(&mode);

		switch(mode){
			case 'S':
				printGame(&tictactoe);
				do{
					makeMove(&tictactoe);
				} while (continueGame(&tictactoe));
				updateAndReset(&tictactoe);
				break;

			case 'X': 
				printf("**** EXIT game...                                            **** \n");
				status = false;
				break;
		}
	}
	return 0;
}
