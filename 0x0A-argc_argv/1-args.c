#include <stdio.h>
/**
*main - Entry function
*@argc: count of args supplied to prog/size of argv array
*@argv: array of pointers to strings which are the args
*Return: 0 = Success
*/
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
