#include "main.h"

/**
* _strcmp - function that compares two strings.
* @s1:      Parameter One.
* @s2:      Parameter Two.
* Return:   Returns cmp
*/
int _strcmp(char *s1, char *s2)
{

int i = 0, cmp = 0;

while ("True")
{
if (s1[i] == '\0' && s2[i] == '\0')
break;
else if (s1[i] == '\0')
{
cmp = s2[i];
break;
}
else if (s2[i] == '\0')
{
cmp = s1[i];
break;
}
else if (s1[i] != s2[i])
{
cmp = s1[i] - s2[i];
break;
}
else
i++;
}
return (cmp);
}
