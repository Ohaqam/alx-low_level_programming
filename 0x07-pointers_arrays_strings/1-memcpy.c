#include "main.h"

/**
* memcpy - function that copies memory area.
* @dest:   Parameter one.
* @src:    Parameter two.
* @n:      Parameter three.
* Return:  Returns dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

int i = 0;

do
{
dest[i] = src[i];
n++;
}
while (n);
return (dest);
}
