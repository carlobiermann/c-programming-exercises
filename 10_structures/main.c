#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


int main()
{
	gameStruct tictactoe;
	tictactoe.score = 1;
	printGame(&tictactoe);	

	editGame(&tictactoe);
	printGame(&tictactoe);

}
