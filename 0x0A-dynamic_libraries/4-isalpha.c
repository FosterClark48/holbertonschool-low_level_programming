#include "main.h"
/**
 * _isalpha - Entry Function
 * @c: the int val recieived
 * Description: checks for alphabet character
 * Return: 1 true. 0 false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
