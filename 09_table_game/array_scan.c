#include <stdio.h>
#include <stdlib.h>

#define SSIZE (4)
char field[SSIZE]; /* 'R','C','\0', '\n' */

int main() 
{ 
	int inputSize;

	while((fgets(field, SSIZE,stdin)) != NULL ){
		if(sizeof(field) != 4){
			printf("Invalid Input, try again \n");		
			continue;
		} else {	
		printf("Index [1]: %c Index [0]: %c \n", field[1], field[0]);
		break;
		}
	}
	return 0;
}
