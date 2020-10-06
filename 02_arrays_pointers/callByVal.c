#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* To understand the fundamentals of arrays and pointers */

void swap(int x, int y) /* swap copied values of x and y  */
{
	printf("Inside swap function, before swap x = %d \n ", x);
	printf("Inside swap function, before swap y = %d \n ", y);

	int temp;
	temp = x; 
	x = y;
	y = temp;
	
	printf("Inside swap function, after swap x = %d \n ", x);
	printf("Inside swap function, after swap y = %d \n ", y);
}

int main() 
{
	int a = 3; 
	int b = 6; 

	printf("Before the pseudo swap a = %d \n ", a);	
	printf("Before the pseudo swap b = %d \n ", b);	
	swap(a, b); 
	
	printf("After the pseudo swap a = %d \n ", a); 
	printf("After the pseudo swap b = %d \n ", b);
	
	return 0;	
}
