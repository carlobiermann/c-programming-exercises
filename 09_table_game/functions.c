#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*
#define SSIZE (4)
char field[SSIZE]; 'R','C','\0','\n' from stdin */

void printTable(int rows, int cols, char arr[][4])
{
	int i,j;

	for(int i=0; i < rows; i++){
		for(int j=0; j < cols; j++)
			printf("%5c",arr[i][j]);
		printf("\n");
	}
}

void readField(int *row, int *col)
{
	bool wrongRow = true;
	bool wrongCol = true;
	char errMsg[26];
	int readCounter;
	int asciiValue = 0;
	int inputRow = 0;
	int inputCol = 0;
	
	printf("Please enter a field: \n");

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

bool occupied(int row, int col, char (*arr)[4])
{
	char field;
	field = arr[row][col];

	if(field != '_'){
		printf("Field is already occupied \n");
		return true;
	} else {
		return false;
	}
}


void writeTable(int row, int col, int *counter, char (*arr)[4])
{
	int i, j;
	i = row;
	j = col;	

	if (*counter%2 == 0)
		arr[i][j] = 'X';
	else
		arr[i][j] = 'O';

	*counter += 1;
}


