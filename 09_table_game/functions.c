#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
	char r;
	char c;
	bool wrongRow = true;
	bool wrongCol = true;

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
				printf("Invalid input \n");
				wrongRow = true;
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
				printf("Invalid input \n");
				wrongCol = true;
				break;
		}
		*row = inputRow;
		*col = inputCol;	
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
