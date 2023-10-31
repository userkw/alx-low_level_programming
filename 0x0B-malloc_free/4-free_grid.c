#include <stdlib.h>

/**
 * free_grid - Frees the memory allocated for a 2D grid.
 * @grid: The 2D grid to be freed.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return; 

	while (height--)
		free(grid[height]);
	free(grid);
}
