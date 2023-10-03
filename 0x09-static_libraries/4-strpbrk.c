#include "main.h"

/**
* _strpbrk - function locates the first ocr in the string s of any of the bytes
* @s:        string where search is made
* @accept:   string where searched bytes are located
* Return:    Returns s or Null
*/

char *_strpbrk(char *s, char *accept)
{

int i;
	
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
return (s);
}
s++;
}
return ('\0');
}
