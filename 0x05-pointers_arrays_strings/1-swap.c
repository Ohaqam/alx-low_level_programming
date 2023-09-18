#include "main.h"

/**
*reset_to_98 - function that swaps the values of two integers
*@c: tested character
*Return: returns 0
*/

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
