#include "main.h"

/**
* argstostr - function that concatenates all the arguments of your program.
* @ac:        Parameter one.
* @av:        Parameter two.
* Return:     Returns NULL or new_string
*/

char *argstostr(int ac, char **av)
{

char *new_string = NULL;
int k = 0, i = ac, j, sum = 0, temp = 0;

if (ac == 0 || av == NULL)
{
return (NULL);
}
while (ac--)
sum += (len(av[ac]) + 1);
new_string = (char *) malloc(sum + 1);
if (new_string != NULL)
{
while (k < i)
{
for (j = 0; av[k][j] != '\0'; j++)
new_string[j + temp] = av[k][j];
new_string[temp + j] = '\n';
temp += (j + 1);
k++;
}
new_string[temp] = '\0';
}
else
{
return (NULL);
}
return (new_string);
}

/**
* len -  function that returns length of str
* @str:  Parameter one.
* Return:Returns len
*/

int len(char *str)
{

int len = 0;

if (str != NULL)
{
while (str[len])
len++;
}
return (len);
}
