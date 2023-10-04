#include "main.h"

/**
* free_grid - function that frees a 2 dimensional grid 
* @grid:      Parameter one.
* @height:    Parameter two.
* Return:     Returns nothing.
*/

void free_grid(int **grid, int height)
{

int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
