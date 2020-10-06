#include <stdio.h>
#include <stdbool.h>
/* A program that calculates the sum of the user input */
/* EXCEPT: In this programm ONLY numbers that are divisble by 3 or 5 are considered in the sum */

bool divisibleBy(int number, int divisor);

int main () 
{
	int stopNumber;
	int counter;
	int sum = 0;
	int x = 0;

	printf("Please enter an integer number and press return: \n");
	scanf("%d", &stopNumber);
	printf("Printing all the numbers from 1 to %d that go into calculating that sum: \n", stopNumber);

	for (counter = 1; counter <= stopNumber; ++counter)
	{
		if(divisibleBy(counter, 3) || divisibleBy(counter, 5))
		{
			sum = x + counter;
			printf("%d \n", counter);
			x = sum;
		}	
	}

	printf("The sum of the numbers divisible by either 3 or 5 from 1 to %d = %d \n", stopNumber, sum);

	return 0; 
}

bool divisibleBy(int number, int divisor)
{
	int res; 
	res = number % divisor; 
	if (res == 0)
	{
		return true;
	} else 
	{
		return false; 
	}
}	

