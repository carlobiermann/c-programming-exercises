#include <stdio.h>
#include <stdlib.h>

void readInput(int *num)
{
	int inputNum;

	printf("\033[1;33mPlease enter a number N  between 1 and 20 to print a multiplication table from 1 to N: \n");
	scanf("%d", &inputNum);
	printf("\033[0m");

	*num = inputNum;	
}


void printTable(int num)
{
	size_t s = num;
	int arr[s][s];
	int i,j;

	for(int i=0; i<num; i++){
		for(int j=0; j<num; j++){
			arr[i][j] = (i+1)*(j+1);
			printf("\033[0;33m %6d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\033[0m");
}
