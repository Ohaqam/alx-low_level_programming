#include "function_pointers.h"


/**
 * array_iterator - Function that exec func given as parameter on each elem of array.
 * @array:          Parameter one.
 * @size:           Parameter two.
 * @action:         Parameter three.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

size_t arr;

if (array == NULL || action == NULL)
return;
for (arr = 0; arr < size; arr++)
{
action(array[arr]);
}
}
