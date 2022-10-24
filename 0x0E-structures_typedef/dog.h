#ifndef DOG_H
#define DOG_H

/*
*libraries - included
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
*struct dog - dog info
*@name: name of dog
*@age: age of dog
*@owner: dogs owner
*Description: dog information
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/*
*dog_t - typedef for dog struct
*/
typedef struct dog dog_t;

/*
*Prototypes - prototypes for functions
*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
