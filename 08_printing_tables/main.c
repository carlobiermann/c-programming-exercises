#include <stdio.h>

int main() 
{
	int i, j, n;

	n = 300; 
	j = 1;

	for(i = n; i <= (n*100); i += n) {
		printf("%5d   x %5d    = %8d\n", n, j, i);
		j++;
	}

	return 0; 
}
