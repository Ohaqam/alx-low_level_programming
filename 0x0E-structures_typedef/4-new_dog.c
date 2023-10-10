#include "dog.h"


/**
* _strlen - Function that returns len.
* @str:     Parameter one.
* Return:   Returns len.
*/

int _strlen(char *str)
{

int len = 0;

while (str)
len++;
return (len);
}


/**
* _strcopy - copy string src into dest.
* @dest:     Parameter one.
* @src:      Parameter two.
* Return:    Returns dest.
*/

char *_strcopy(char *dest, char *src)
{

int i = 0;

for (; src[i] ; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}


/**
* new_dog - Function that creates a new dog.
* @name:    Parameter one.
* @age:     Parameter two.
* @owner:   Parameter three.
* Return:   Returns NULL or d.
*/
dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *d;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
d->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (d->name == NULL)
{
free(d);
return (NULL);
}
d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
d->name = _strcopy(d->name, name);
d->age = age;
d->owner = _strcopy(d->owner, owner);
return (d);
}
