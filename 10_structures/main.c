#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

struct game 
{
	int nGames;
	int winsPlayerOne;
	int winsPlayerTwo;
	char gameTable[][4];
};


int main()
{
	struct game tictactoe;
	int m = 4;
	int n = 4;

	tictactoe.nGames = 1;
	tictactoe.winsPlayerOne = 0;
	tictactoe.winsPlayerTwo = 0;
	tictactoe.gameTable[][4] = {{' ','1','2','3'},{'A','_','_','_'},{'B','_','_','_'},{'C','_','_','_'}};

	printGame(m, n, &tictactoe);	


}
