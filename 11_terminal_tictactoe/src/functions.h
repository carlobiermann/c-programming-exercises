#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

typedef struct Game{
	int gamesPlayed;
	int playerOneScore;
	int playerTwoScore;
	int tracker;
	int playerRow;
	int playerCol;
	char table[4][4];
} game;

void readMode(char *mode);
void printGame(game *tictactoe);
void playGame(game *tictactoe);
void readField(game *tictactoe);
bool occupied(game *tictactoe);
void writeTable(game *tictactoe);
bool continueGame(game *tictactoe);
bool winningLine(game *tictactoe);
void updateAndReset(game *tictactoe);


#endif
