#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "functions.h"

void readMenuStatus(char *userInput) 
{
	bool wrongStatus = true;
	int asciiValue = 0; 
	int inputStatus = 0;
	int readCounter;	
	char errMsg[26];

	while(wrongStatus){
		errMsg[0] = 0;
		readCounter = 0;

		while((asciiValue = getchar()) != EOF && (asciiValue != '\n')){
			if(readCounter == 0)
				inputStatus = asciiValue;
			readCounter++;
		}
		switch(inputStatus){
			case 83:
				*userInput = 'S';
				wrongStatus = false;
				break;
			case 88:
				*userInput = 'X';
				wrongStatus = false;
				break;
			default:
				wrongStatus = true;
				strcpy(errMsg,"Invalid input, try again:");
				break;

		}
		if(errMsg[0] != 0)
			printf("%s \n", errMsg);
	}
}
