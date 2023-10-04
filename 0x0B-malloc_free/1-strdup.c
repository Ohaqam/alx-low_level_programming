#include "main.h"

/**
* _strdup - function that creates an array of chars, and initializes it with a specific char.
* @str:     Parameter one.
* Return:   Returns NULL or cpy
*/

char *_strdup(char *str)
{
	
char *cpy;
int index, len;

if (str == NULL)
{
return (NULL);
}
for (index = 0; str[index]; index++)
{
len++;
}
cpy = malloc(sizeof(char) * (len + 1));
if (cpy == NULL)
{
return (NULL);
}
for (index = 0; str[index]; index++)
{
cpy[index] = str[index];
}
cpy[len] = '\0';
return (cpy);
}
