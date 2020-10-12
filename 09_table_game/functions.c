#include <stdio.h>
#include <stdlib.h>

void readInput (int *num) 
{
	int inputNum; 

	printf("Please enter a field: \n");
	scanf("%d", &inputNum);

	*num = inputNum;
}

void printTable(int rows, int cols, int arr[][5])
{
	int i,j;

	for(int i=0; i < rows; i++){
		for(int j=0; j < cols; j++){
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}
}

void readValues(int *row, int *col)
{
	int inputRow;
	int inputCol;

	printf("Select a row: \n");
	scanf("%d", &inputRow);

	printf("Select a column: \n");
	scanf("%d", &inputCol);

	*row = inputRow;
	*col = inputCol;
}

void writeTable(int row, int col, int (*arr)[5])
{
	int i, j;
	i = row;
	j = col;	
	
	arr[i][j] = 1;
}
