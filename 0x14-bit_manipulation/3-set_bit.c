#include "main.h"
/**
*set_bit - Sets value of bit to 1 at given index
*@n: number given
*@index: location of bit
*Return: 1 = Success, -1 = Error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n = (*n) | (1 << index);

	return (1);
}
