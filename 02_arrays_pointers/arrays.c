#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* To understand the fundamentals of arrays and pointers, especially character arrays */ 
 
int string_length(char *s);

int main()
{
	int length;
	length = string_length("Carlo Biermann");
	printf(" 'Carlo Biermann'  has a length of: %d characters \n", length);
	return 0;
}


int string_length(char *s)
{
	int n; 
	for (n = 0; (*s != '\0'); s++)
	{	
		n++;
	}
	return n;	
}
