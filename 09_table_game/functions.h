#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

typedef struct Game{
	int nGames;
	int playerOneScore;
	int playerTwoScore;
	int tracker;
	char table[4][4];
} game;

void printGame(game *tictactoe);

#endif
/*
void readField(int *row, int *col, game *tictactoe);
bool occupied(int row, int col, game *tictactoe);
void writeTable(int row, int col, game *tictactoe);
*/


