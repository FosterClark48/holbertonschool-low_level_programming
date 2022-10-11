#include <stdio.h>
/**
*main - Entry function
*@argc: count of args supplied to prog/size of argv array
*@argv: array of pointers to strings which are the args
*Return: 0 = Success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
