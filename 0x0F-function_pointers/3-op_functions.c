#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
*op_add - adds ints a & b
*@a: first int to add
*@b: second int to add
*Return: sum of a & b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - subtracts ints a & b
*@a: first int to subtract
*@b: second int to subtract
*Return: difference of a & b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - multiplies ints a & b
*@a: first int to multiply
*@b: second int to multiply
*Return: product of a & b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - divides ints a & b
*@a: first int to divide with
*@b: second int to divide with
*Return: Result of a & b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
*op_mod - modulos ints a & b
*@a: first int to mod
*@b: second int to mod
*Return: remainder of a & b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
