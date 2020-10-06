#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* A program that calculates the sum of the user input */

char * getOp();

int main () 
{
	int stopNumber;
	int counter;
	int sum = 0;
	int x = 0;
	
	printf( "Enter 'sum for summation OR 'mul' for multiplication: \n");
	char *ope = getOp();
	printf("your result: %s \n", ope);
  
	printf("Please enter an integer number and press return: \n");
	scanf("%d", &stopNumber);
	printf("Printing all the nummbers from 1 to %d that go into that sum: \n", stopNumber);
		
	
	for (counter = 1; counter <= stopNumber; ++counter)
	{
		sum = x + counter;
		printf("%d \n", counter);
		x = sum;	
	}

	printf("The sum of the numbers from 1 to %d = %d \n", stopNumber, sum);
	
	free(ope);
	return 0; 
}

char * getOp() 
{ 
	char *op = malloc(5);
	fgets(op,5,stdin);
	op[strcspn(op, "\n")] = '\0';
	
	return op;		
}

