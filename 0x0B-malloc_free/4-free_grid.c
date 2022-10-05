#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid prebiously created
 * @grid: 2 dimensional grid
 * @height: dimension of the grid
 * Description: frees memory of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int m;
for (m = 0; m < height; m++)
{
free(grid[m]);
}
free(grid);
}
