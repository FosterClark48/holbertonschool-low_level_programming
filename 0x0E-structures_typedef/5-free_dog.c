#include "dog.h"
/**
*free_dog - free memory allocated to my_dog
*@d: pointer to dog_t struct
*Return: void
*/
void free_dog(dog_t *d)
{
	if (!(d))
	{
		return;
	}

	free((*d).owner);
	free((*d).name);
	free(d);
}
