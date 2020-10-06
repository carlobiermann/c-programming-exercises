#include <stdio.h>
#include <string.h>

int main()
{
	char n1[20] = "Bob";
	char n2[20] = "Alice";
	char name[20];
	int res1;
	int res2;

	printf("Hey, there! Tell me your name... \n");
	fgets(name,20,stdin);
	name[strcspn(name, "\n")] = '\0'; /* snip newline character from fgets()  */
	res1 = strcmp(name, n1);
	res2 = strcmp(name, n2);

	if(res1 == 0)
	{
		printf("Oh... Hello %s \n", name);
	} else if (res2 == 0)
	{
		printf("Heeeyyy %s \n", name);
	} else 	
	{
		printf("Go away Stranger. \n");
	}
	return 0;
}

