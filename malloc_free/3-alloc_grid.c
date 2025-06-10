#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Returns a pointer to a 2 dimensional array of integers.
* @width: The number of columns.
* @height: The number of rows.
*
* Return: Pointer to the 2D array, or NULL on failure.
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

/* Check for invalid width or height */
if (width <= 0 || height <= 0)
return (NULL);

/* Allocate memory for rows */
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

/* Allocate memory for columns and initialize to 0 */
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
/* Free previously allocated rows in case of failure */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
