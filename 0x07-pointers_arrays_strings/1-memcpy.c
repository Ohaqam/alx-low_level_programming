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

unsigned int i = 0;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
