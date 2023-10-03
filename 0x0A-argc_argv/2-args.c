#include <stdio.h>

/**
* main - prints all arguments it received
* @argc: Parameter one.
* @argv: Parameter two.
* Return:Returns nothing
*/

int main(int argc, char *argv[])
{

int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
