#include "dog.h"
/**
*print_dog - prints the structure dog
*@d: pointer to struct dog
*Return: void
*/
void print_dog(struct dog *d)
{
	if (!(d))
	{
		exit(EXIT_FAILURE);
	}

	if (!(*d).name)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
	}

	if ((*d).age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", (*d).age);
	}

	if (!(*d).owner)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", (*d).owner);
	}
}
