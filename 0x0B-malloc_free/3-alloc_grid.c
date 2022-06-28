#include "main.h"
#include <stdlib.h>
/**
 * alloc_grind - returns pointer to 2 dimenstional array integers
 * @width: width of array
 * @height: height of array
 */

int **alloc_grid(int width, int height)
{
int i, j, k, l;
int **g;

if (width <= 0 || height <= 0)
return (NULL);
g = malloc(height * sizeof(int *));
if (g == NULL)
{
free(g);
return (NULL);
}

for (i = 0; i < height; i++)
{
g[i] = malloc(width * sizeof(int));
if (g[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(g[j]);
}
free(g);
return (NULL);
}
}

for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
g[k][l] = 0;
}
return (g);
}
