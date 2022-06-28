#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2 dimentional grid
 * @grid: multidimentional array of intergers.
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0 ; i < height ; i++)
{
free(grid[i]);
}
free(grid);
}
