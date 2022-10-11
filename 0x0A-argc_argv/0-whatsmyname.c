#include <stdio.h>
/**
*main - Entry Function
*@argc: count of args supplied to prog/size of argv array
*@argv: array of pointers to strings which are the args
*Return: 0 = Success
*/
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
