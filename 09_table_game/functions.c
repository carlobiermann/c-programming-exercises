#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define SSIZE (4)
char field[SSIZE]; /* 'R','C','\0','\n' from stdin */

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
	int printCounter = 0;
	char r;
	char c;
	char errMsg[26];
	bool wrongRow = true;
	bool wrongCol = true;

	errMsg[0] = 0;
	
	printf("Please enter a field: \n");

	while(wrongRow || wrongCol){
		
		fgets(field, SSIZE, stdin);	
		r = field[0];
		c = field[1];
	
		switch(r){
			case 'A':
				inputRow = 1;
				wrongRow = false;
				break;
			case 'B': 
				inputRow = 2;
				wrongRow = false;
				break;
			case 'C':
				inputRow = 3;
				wrongRow = false;
				break;
			default:
			       	wrongRow = true;	
				if(errMsg[0] == 0)
					strcpy(errMsg,"Invalid input, try again:");
				break;
		}

		switch(c){
			case '1':
				inputCol = 1;
				wrongCol = false;
				break;
			case '2':
				inputCol = 2;
				wrongCol = false;
				break;
			case '3':
				inputCol = 3;
				wrongCol = false;
				break;
			default:
			       	wrongCol = true;
				if(errMsg[0] == 0)
					strcpy(errMsg,"Invalid input, try again:");
				break;
		}

		/* This will only print once after a false input, haven't found a way to flush char array from stdin yet */
		if((errMsg[0] != 0) && (printCounter < 1)){
			printf("%s \n", errMsg);
			printCounter++;	
		}
	}
	*row = inputRow;
	*col = inputCol;
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
