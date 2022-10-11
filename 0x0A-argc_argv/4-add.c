#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - Entry function
*@argc: count of args supplied to prog/size of argv array
*@argv: array of pointers to strings which are the args
*Return: 0 = Success
*/
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 1; argc > i; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
