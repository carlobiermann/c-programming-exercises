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
	bool inputValidityRow = false;
	bool inputValidityCol = false;

	while((inputValidityRow == false) || (inputValidityCol == false)){

		fgets(field, SSIZE, stdin);	
		r = field[0];
		c = field[1];
	
		switch(r)
		{
			case 'A':
				inputRow = 1;
				inputValidityRow = true;
				*row = inputRow;
				break;
			case 'B': 
				inputRow = 2;
				inputValidityRow = true;
				*row = inputRow;
				break;
			case 'C':
				inputRow = 3;
				inputValidityRow = true;
				*row = inputRow;
				break;
			default: 
				printf("Invalid input \n");
				inputValidityRow = false;
				break;
		}

		switch(c)
		{
			case '1':
				inputCol = 1;
				inputValidityCol = true;
				*col = inputCol;
				break;
			case '2':
				inputCol = 2;
				inputValidityCol = true;
				*col = inputCol;
				break;
			case '3':
				inputCol = 3;
				inputValidityCol = true;
				*col = inputCol;
				break;
			default: 
				printf("Invalid input \n");
				inputValidityCol = false;
				break;
		}
	
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
