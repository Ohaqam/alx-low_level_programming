#include "main.h"

/**
* malloc_checked - function that allocates memory using malloc.
* @b:              Parameter one.
* Return:          Returns blk
*/

void *malloc_checked(unsigned int b)
{

void *blk;
blk = malloc(b);

if (blk == NULL)
{
exit(98);
}
return (blk);
}
