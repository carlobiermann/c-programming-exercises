#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "functions.h"

void readMode(char *mode) 
{
	bool validMode = false;
	int asciiValue = 0; 
	int readCounter;
	int userInput = 0;	
	char errMsg[26];

	while(validMode != true){
		errMsg[0] = 0;
		readCounter = 0;

		while((asciiValue = getchar()) != EOF && (asciiValue != '\n')){
			if(readCounter == 0)
				userInput = asciiValue;
			readCounter++;
		}
		switch(userInput){
			case 83:
				*mode = 'S';
				validMode = true;
				break;
			case 88:
				*mode = 'X';
				validMode = true;
				break;
			default:
				validMode = false;
				strcpy(errMsg,"Invalid input, try again:");
				break;

		}
		if(errMsg[0] != 0)
			printf("%s \n", errMsg);
	}
}

void printGame(game *tictactoe)
{
		int r,c;

	printf("\n");
	printf("****     Games:    %d                                         **** \n", tictactoe->gamesPlayed);
	printf("****     Player 1: %d  wins                                   **** \n", tictactoe->playerOneScore);
	printf("****     Player 2: %d  wins                                   **** \n", tictactoe->playerTwoScore);
	printf("\n");
	for(r = 0; r < 4; r++){
		for(c = 0; c < 4; c++)
			printf("%10c", tictactoe->table[r][c]);
		printf("\n");
	}
	printf("\n");
}


void playGame(game *tictactoe)
{
	do{
		readField(tictactoe);
	} while (occupied(tictactoe));

	writeTable(tictactoe);
	printGame(tictactoe);
}

void readField(game *tictactoe)
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
				tictactoe->playerRow = 1;
				wrongRow = false;
				break;
			case 66: 
				tictactoe->playerRow = 2;
				wrongRow = false;
				break;
			case 67:
				tictactoe->playerRow  = 3;
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
				tictactoe->playerCol = 1;
				wrongCol = false;
				break;
			case 50:
				tictactoe->playerCol = 2;
				wrongCol = false;
				break;
			case 51:
				tictactoe->playerCol = 3;
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

bool occupied(game *tictactoe)
{
	char field;
	int r,c;
	r = tictactoe->playerRow;
	c = tictactoe->playerCol;
	field = tictactoe->table[r][c];

	if(field != '_'){
		printf("Field is already occupied, try again: \n");
		return true;
	} else
		return false;
}

void writeTable(game *tictactoe)
{
	int r, c;

	r = tictactoe->playerRow;
	c = tictactoe->playerCol;	

	if(tictactoe->tracker %2 != 0)
		tictactoe->table[r][c] = 'X';
	else
		tictactoe->table[r][c] = 'O';

	tictactoe->tracker += 1;
}

bool continueGame(game *tictactoe)
{
	if(winningLine(tictactoe)){
		if((tictactoe->tracker - tictactoe->gamesPlayed) %2){
			printf("Player 2  won! \n");
			tictactoe->playerTwoScore++;
		} else {
			printf("Player 1  won! \n");
			tictactoe->playerOneScore++;
		}
		return false;
	} else if((tictactoe->tracker - tictactoe->gamesPlayed) == 9){
		printf("It's a draw! \n");
		return false;
	}
	return true;

}

bool winningLine(game *tictactoe) 
{
	int res[8];
	int i;

	/* WINNING ROWS */ 
	res[0] =  tictactoe->table[1][1] 
		+ tictactoe->table[1][2] 
		+ tictactoe->table[1][3];

	res[1] =  tictactoe->table[2][1]
		+ tictactoe->table[2][2]
		+ tictactoe->table[1][3];

	res[2] =  tictactoe->table[3][1]
		+ tictactoe->table[3][2]
		+ tictactoe->table[3][3];

	/* WINNING COLUMNS */ 
	res[3] =  tictactoe->table[1][1]
		+ tictactoe->table[2][1]
		+ tictactoe->table[3][1];

	res[4] =  tictactoe->table[1][2]
		+ tictactoe->table[2][2]
		+ tictactoe->table[3][2];

	res[5] =  tictactoe->table[1][3]
		+ tictactoe->table[2][3]
		+ tictactoe->table[3][3];

	/* WINNING DIAGONALS */
	res[6] =  tictactoe->table[1][1]
		+ tictactoe->table[2][2]
		+ tictactoe->table[3][3];

	res[7] =  tictactoe->table[1][3]
		+ tictactoe->table[2][2]
		+ tictactoe->table[3][1];

	for(i = 0; i <= 7; i++){
		if((res[i] == 264) || (res[i] == 237)){
			return true;
			break;
		}
	}
	return false;	
}

void updateAndReset(game *tictactoe)
{
	int r,c;

	tictactoe->tracker = 1 + tictactoe->gamesPlayed;
	tictactoe->gamesPlayed++;

	for(r=1; r < 4; r++){
		for(c=1; c < 4; c++)
			tictactoe->table[r][c] = '_';
	}
}
