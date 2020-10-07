#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main ()
{
	int age = 37; 
	int *address = &age;
	printf("%u \n", *address); 
}
