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


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
