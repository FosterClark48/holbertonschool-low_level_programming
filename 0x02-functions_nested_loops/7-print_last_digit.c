#include "main.h"
/**
 * print_last_digit - Entry Function
 * @n: n = int
 * Description: prints last digit of number
 * Return: Int
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
