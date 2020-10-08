#include <stdio.h>
#include "getStopN.h"

int main (void) 
{
	int stopNumber; 
	stopNumber = getStopN();

	printf("The number assigned to stopNumber from a function in a seperate file is: %d \n", stopNumber);
}
