#include <stdio.h>

/* This code demonstrates how return values work */

int func()
{       printf("Hello World!\nYou sexy beast\n");
	return 12;
}

int main() 
{ 	
	int result = func(); 
	printf("%d\n", result);
	return 0;
}
