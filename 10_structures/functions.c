#include <stdio.h>
#include <stdlib.h>

void printGame(int rows, int cols)
{
	int i,j;

	for(i=0; i < rows; i++){
		for(j=0; j < cols; j++)
			printf("%5c", tictactoe.gameTable[i][j]);
		printf("\n");
	}
}
