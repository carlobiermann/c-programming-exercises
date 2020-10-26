#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void printGame(gameStruct *tictactoe)
{
	printf("Score is: %d \n", tictactoe->score);
}

void editGame(gameStruct *tictactoe)
{
	tictactoe->score = 100;
}
