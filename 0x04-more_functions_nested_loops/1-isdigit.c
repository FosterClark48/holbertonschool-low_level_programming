#include "main.h"
/**
*_isdigit - Checks for numbers
*@c: Int value recieved
*Description: checks for numerical characters
*Return: 1 for success and 0 for fail
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
