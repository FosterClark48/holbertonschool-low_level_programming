#include "dog.h"
/**
*print_dog - prints the structure dog
*@d: pointer to struct dog
*Return: void
*/
void print_dog(struct dog *d)
{
	int i;

	for (i = 0; i < 1; i++)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).name);
	}
}
