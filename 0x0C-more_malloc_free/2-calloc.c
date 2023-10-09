#include "main.h"

/**
* *_calloc - function that allocates memory for an array, using malloc.
* @nmemb:    Parameter one.
* @size:     Parameter two.
* Return:    Returns blk or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *blk;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
blk = malloc(nmemb * size);
if (blk != NULL)
{
for (i = 0; i < (nmemb * size); i++)
blk[i] = 0;
return (blk);
}
else
return (NULL);
}
