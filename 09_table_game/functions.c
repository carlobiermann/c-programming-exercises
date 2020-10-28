#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "functions.h"

void printGame(game *tictactoe)
{
	int i,j;

	printf("\n");
	printf("     Games:    %d \n", tictactoe->nGames);
	printf("     Player 1: %d wins \n", tictactoe->playerOneScore);
	printf("     Player 2: %d wins \n", tictactoe->playerTwoScore);
	printf("\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++)
			printf("%5c", tictactoe->table[i][j]);
		printf("\n");
	}
	printf("\n");
}

void readField(int *row, int *col, game *tictactoe)
{
	bool wrongRow = true;
	bool wrongCol = true;
	char errMsg[26];
	int readCounter;
	int asciiValue = 0;
	int inputRow = 0;
	int inputCol = 0;

	if(tictactoe->tracker%2 != 0)	
		printf("PLAYER 1: Please enter a field: \n");
	else
		printf("PLAYER 2: Please enter a field: \n");

	while(wrongRow || wrongCol){
		errMsg[0] = 0;
		readCounter = 0;

		
		/* Reads input characters one by one and discards them from stdin */
		while((asciiValue = getchar()) != EOF && (asciiValue != '\n')){
			if(readCounter == 0)
				inputRow = asciiValue;
			else if (readCounter == 1) 
				inputCol = asciiValue;
			readCounter++;
		}
		switch(inputRow){
			case 65:
				*row = 1;
				wrongRow = false;
				break;
			case 66: 
				*row = 2;
				wrongRow = false;
				break;
			case 67:
				*row  = 3;
				wrongRow = false;
				break;
			default:
			       	wrongRow = true;	
				if(errMsg[0] == 0)
					strcpy(errMsg,"Invalid input, try again:");
				break;
		}
		switch(inputCol){
			case 49:
				*col = 1;
				wrongCol = false;
				break;
			case 50:
				*col = 2;
				wrongCol = false;
				break;
			case 51:
				*col = 3;
				wrongCol = false;
				break;
			default:
			       	wrongCol = true;
				if(errMsg[0] == 0)
					strcpy(errMsg,"Invalid input, try again:");
				break;
		}
		if(errMsg[0] != 0)
			printf("%s \n", errMsg);
	}
}

bool occupied(int row, int col, game *tictactoe)
{
	char field;
	field = tictactoe->table[row][col];

	if(field != '_'){
		printf("Field is already occupied, try again: \n");
		return true;
	} else
		return false;
}


void writeTable(int row, int col, game *tictactoe)
{
	int i, j;

	i = row;
	j = col;	

	if (tictactoe->tracker%2 != 0)
		tictactoe->table[i][j] = 'X';
	else
		tictactoe->table[i][j] = 'O';

	tictactoe->tracker += 1;
}



