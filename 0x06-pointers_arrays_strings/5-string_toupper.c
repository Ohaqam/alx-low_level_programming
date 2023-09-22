#include "main.h"

/**
* string_toupper - function that changes lowercase letters to uppercase.
* @str:            Parameter One.
* Return:          Returns str.
*/

char *string_toupper(char *str)
{
int i = 0;
while (str[i++])
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
}
return (str);
}
