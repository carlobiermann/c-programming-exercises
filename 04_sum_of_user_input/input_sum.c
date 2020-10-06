#include <stdio.h>

/* A program that calculates the sum of the user input */

int main () 
{
	int stopNumber;
	int counter;
	int sum = 0;
	int x = 0;

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

	return 0; 
}

