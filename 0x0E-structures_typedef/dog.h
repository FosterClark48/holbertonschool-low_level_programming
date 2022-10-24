#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


struct dog
{
	char *name;
	float age;
	char *owner;
};

/*
Prototypes needed
*/

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);


#endif
