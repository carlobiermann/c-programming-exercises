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
		for(int j=0; j < cols; j++){
			printf("%5c",arr[i][j]);
		}
		printf("\n");
	}
}

void readPlayerOne(int *row, int *col)
{
	int inputRow;
	int inputCol;
	int r = 0;
	int c = 0;
	char errMsg[26];
	bool wrongRow = true;
	bool wrongCol = true;
	
	printf("Please enter a field: \n");

	while(wrongRow || wrongCol){
		
		int ch = 0;
		int readCounter = 1;
		errMsg[0] = 0;

		while((ch = getchar()) != EOF && (ch != '\n')){
			if(readCounter == 1){
				r = ch;
			}
			else if (readCounter == 2){
				c = ch;
			} else {
				r = ch;
				c = ch;
			}	
			readCounter++;
		}
	
		switch(r){
			case 65:
				inputRow = 1;
				wrongRow = false;
				break;
			case 66: 
				inputRow = 2;
				wrongRow = false;
				break;
			case 67:
				inputRow = 3;
				wrongRow = false;
				break;
			default:
			       	wrongRow = true;	
				if(errMsg[0] == 0){
					strcpy(errMsg,"Invalid input, try again:");
				}
				break;
		}

		switch(c){
			case 49:
				inputCol = 1;
				wrongCol = false;
				break;
			case 50:
				inputCol = 2;
				wrongCol = false;
				break;
			case 51:
				inputCol = 3;
				wrongCol = false;
				break;
			default:
			       	wrongCol = true;
				if(errMsg[0] == 0){
					strcpy(errMsg,"Invalid input, try again:");
				}
				break;
		}

		/* This will only print once after a false input, haven't found a way to flush char array from stdin yet */
		if(errMsg[0] != 0){
			printf("%s \n", errMsg);
		}
	}
	*row = inputRow;
	*col = inputCol;
}

bool fieldOccupied(int row, int col, char (*arr)[4])
{
	char field;
	field = arr[row][col];

	if(field != '_'){
		printf("Field is already taken \n");
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


