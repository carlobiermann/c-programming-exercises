#include <stdio.h>
#include <stdlib.h>

/* This file contains functions used in main */

void readInput(int *num, char *op)
{
	int inputNum;
	printf("Please enter an integer number and press return: \n");
	scanf("%d", &inputNum);
	
	char inputOp;
	printf("Enter 's' for summation operation OR 'm' for multiplication operation: \n");
	scanf(" %c", &inputOp);

	*num = inputNum;
	*op = inputOp;
}

int performCalc(int num, char op)
{
	int counter;
	int res = 0;
	const char *space = "________________";	

	if(op == 's'){
		for (counter = 1; counter <= num; ++counter){
			res = res + counter;

			if(counter < 2)
				printf("---      %d     \n", counter);
			else	
				printf("---    + %d     \n", counter);
			if (counter == num){
				printf("%s \n", space);
				printf("       = %d \n", res);
			}	
		}
	} else if (op == 'm') {
		for (counter = 1; counter <= num; ++counter){
			res  = counter * counter;
			printf("--- %d * %d =  %d \n", counter, counter, res);
		}
	}	
	return 0;
}
