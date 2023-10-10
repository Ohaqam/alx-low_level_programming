#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - New dog type
* @name: Corresponds to Parameter.
* @age:  Corresponds to Parameter.
* @owner:Corresponds to Parameter.
*/

struct dog
{
char *name;
float age;
char *owner;
};


/**
* dog_t - new name for the type struct dog.
*/

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

#endif
