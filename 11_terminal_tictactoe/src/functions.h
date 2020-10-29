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


#endif
