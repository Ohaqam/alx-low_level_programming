#include <stdio.h>

/**
* main - prints the number of arguments
* @argc: Parameter one.
* @argv: Parameter two.
* Return:Returns number of arg.
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
