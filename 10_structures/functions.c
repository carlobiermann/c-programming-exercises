#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


void printGame(gameStruct *tictactoe)
{
	printf("Score is: %d \n", tictactoe->score);
	printf("Array element row[i][j] with i = 1 j = 0: %c \n",tictactoe->table[1][0]);
}

void editGame(gameStruct *tictactoe)
{
	tictactoe->score = 100;
	tictactoe->table[1][0] = 'V';
}
