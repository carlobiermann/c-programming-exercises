#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char field[3]={'_','X','\n'};

	printf("%c \n", field[0]);

	scanf("%s", field);

	printf("Index [1]: %c Index [0]: %c \n", field[1], field[0]);

	return 0;
}
