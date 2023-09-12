#include "main.h"

/**
* main - check the code
* int _isalpha(int c)
* @c:checks for alphabetic character.
* Returns 1 if c is a letter, lowercase or uppercase, Returns 0 otherwise
* Return: Always 0.
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
