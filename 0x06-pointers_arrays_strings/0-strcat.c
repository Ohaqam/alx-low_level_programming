#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: Destination string
* @@src: Source String
* Return: Returns pointer to dest
*/

char *_strcat(char *dest, char *src)
{
int i, len = 0;
while (dest[i++])
len++;

for (i = 0; src[i]; i++)
dest[len++] = src[i];

return (dest);
}
