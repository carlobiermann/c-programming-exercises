#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main (void) 
{
	char op;
	int num;
	int res;

	readInput(&num, &op);
	performCalc(num,op);

	return 0; 
}
