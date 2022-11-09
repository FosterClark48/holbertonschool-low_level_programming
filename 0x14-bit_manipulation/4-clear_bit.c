#include "main.h"
/**
*clear_bit - Sets value of bit to 0 at given index
*@n: number given
*@index: location of bit
*Return: 1 = Success, -1 = Error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long m = 1;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	m = ~(1 << index);
	*n = (*n) & m;

	return (1);
}
