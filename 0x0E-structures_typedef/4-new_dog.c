#include "dog.h"
/**
*new_dog - new dog to be created
*@name: name of new dog type char
*@age: age of new dog type int
*@owner: name of owner type char
*Return: 0 if Success, NULL if fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	if ((!(name)) || (age < 0) || (!(owner)))
	{
		return (NULL);
	}

	n_dog = malloc(sizeof(dog_t));
	if (!(n_dog))
	{
		return (NULL);
	}

	(*n_dog).name = malloc(sizeof(char) * (strlen(name) + 1));
	if (!(n_dog->name))
	{
		free(n_dog);
		return (NULL);
	}

	(*n_dog).owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (!(n_dog->owner))
	{
		free((*n_dog).name);
		free(n_dog);
		return (NULL);
	}

	(*n_dog).name = strcpy((*n_dog).name, name);
	(*n_dog).age = age;
	(*n_dog).owner = strcpy((*n_dog).owner, owner);

	return (n_dog);
}
