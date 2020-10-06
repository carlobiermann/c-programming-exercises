#include <stdio.h>

/* A program that asks the user for their name */



int main()
{
char name[20];

printf("Hey there! Tell me your name... \n");
fgets(name,20,stdin);
printf("Hi there, %s \n", name);
return 0;

}
