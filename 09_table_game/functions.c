#include <stdio.h>
#include <stdlib.h>

void printTable(int rows, int cols, char arr[][5])
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

	printf("Player 1 Select a row: \n");
	scanf("%d", &inputRow);

	printf("Player 1 Select a column: \n");
	scanf("%d", &inputCol);

	*row = inputRow;
	*col = inputCol;
}

void readPlayerTwo(int *row, int *col)
{
	int inputRow;
	int inputCol;

	printf("Player 2 Select a row: \n");
	scanf("%d", &inputRow);
	
	printf("Player 2 Select a column: \n");
	scanf("%d", &inputCol);	

	*row = inputRow;
	*col = inputCol;
}

void writeTable(int row, int col, int *counter, char (*arr)[5])
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
