#include "main.h"
#include <string.h>
/**
*puts2 - Entry function
*@str: String pointer variable
*Description: Function printing every other char
*Return: 0 = Success
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	if (i % 2 == 0)
		_putchar(str[i]);
	_putchar('\n');
}
