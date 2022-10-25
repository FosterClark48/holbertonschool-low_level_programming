#include "function_pointers.h"
/**
*array_iterator - exe a func given as a parameter on each element of an array
*@array: Pointer to array being used
*@size: size of the array being pointed to/used
*@action: pointer to the function needing to be used
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
