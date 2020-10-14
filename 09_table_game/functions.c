#include <stdio.h>
#include <stdlib.h>

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

	char field[3] =  {'_','_','\n'};
	char r;
	char c;

	printf("Player 1 Select a field: \n");
	scanf("%s",field);
	r = field[0];
	c = field[1];

	switch(r)
	{
		case 'A':
			inputRow = 1;
			break;
		case 'B': 
			inputRow = 2;
			break;
		case 'C':
			inputRow = 3;
			break;
		default: 
			printf("Invalid input \n");
			break;
	}

	switch(c)
	{
		case '1':
			inputCol = 1;
			break;
		case '2':
			inputCol = 2;
			break;
		case '3':
			inputCol = 3;
			break;
		default: 
			printf("Invalid input \n");
			break;
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
