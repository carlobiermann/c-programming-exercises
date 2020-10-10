#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/* This file contains functions used in main.

 * The user defines an operation on an integer number via char op and int num.
 *
 * So far valid inputs for char op are either 's' or 'm' which either 
 * perform a summation ('s') or a multiplication ('m') operation.
 *
 * Valid operation methods may be added later on... */

void readInput(int *num, char *op)
{
	int inputNum;
	char inputOp;

	printf("Please enter an integer number and press return: \n");
	scanf("%d", &inputNum);
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

	switch(op)
	{
		case 's':
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
			break;

		case 'm':
			for (counter = 1; counter <= num; ++counter){
				res  = counter * counter;
				printf("--- %d * %d =  %d \n", counter, counter, res);
			}
			break;
		
		default: 
			fprintf(stderr, "Error! =>  %s \n", strerror(errno));	
	}
	return 0;
}
