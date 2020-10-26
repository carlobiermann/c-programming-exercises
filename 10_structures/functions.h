#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct Game{
	char table[4][4];
	int score;
} gameStruct;

void printGame(gameStruct *tictactoe);
void editGame(gameStruct *tictactoe);

#endif
