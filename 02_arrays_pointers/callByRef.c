#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* To understand the fundamentals of arrays and pointers */

void swap(int *px, int *py) /* swap values of *px and *py  */
{
	int temp;
	temp = *px; 
	*px = *py;
	*py = temp;
}

int main() 
{
	int a = 3; 
	int b = 6; 

	printf("Before the swap a = %d \n ", a);	
	printf("Before the swap b = %d \n ", b);	
	swap(&a, &b); 
	
	printf("After the swap a = %d \n ", a); 
	printf("After the swap b = %d \n ", b);
	
	return 0;	
}
