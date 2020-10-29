#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "functions.h"


int main()
{
	bool status = true;
	char userInput;

	while(status) {
		printf("To START a game of TIC TAC TOE enter 'S' \n");
		printf("To EXIT program enter 'X': \n");

		readMenuStatus(&userInput);

		switch(userInput){
			case 'S':
				printf("Starting game... \n");
				break;

			case 'X': 
				printf("Exit game... \n");
				status = false;
				break;
		}
	}
	return 0;
}
