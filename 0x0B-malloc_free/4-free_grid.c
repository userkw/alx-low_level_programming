#include "main.h"

/**
 * free_grid - Release memory used by a 2D grid.
 * @g: The grid to be deallocated.
 * @height: The number of rows in the grid.
 *
 * Return: None.
 */
void free_grid(int **g, int height) {
    int row;

    if (g == NULL || height <= 0) {
        return;
    }

    for (row = 0; row < height; row++) {
        free(g[row]);
    }

    free(g);
}
