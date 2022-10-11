#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry function
*@argc: count of args supplied to prog/size of argv array
*@argv: array of pointers to strings which are the args
*Return: 0 = Success
*/
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc > 2)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
	return (0);
}
