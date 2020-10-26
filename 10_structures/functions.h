#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct Game{
	int score;
} gameStruct;

void printGame(gameStruct *tictactoe);
void editGame(gameStruct *tictactoe);

#endif
