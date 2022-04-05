#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid-free memory
 * @grid:the memory space
 * @height:the dimension of the array
 * Return : nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
