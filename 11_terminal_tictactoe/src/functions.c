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
