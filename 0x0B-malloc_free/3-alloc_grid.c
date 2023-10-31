#include <stdlib.h>

/**
 * alloc_grid - Create a grid.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: A pointer to a newly created grid filled with zeros.
 *         NULL on failure or if width or height is non-positive.
 */
int **alloc_grid(int width, int height) {
	if (width <= 0 || height <= 0) {
		return (NULL);
	}

	int **g = (int **)malloc(height * sizeof(int *));
	if (g == NULL) {
		return (NULL);
	}

	for (int a = 0; a < height; a++) {
		g[a] = (int *)malloc(width * sizeof(int));
		if (g[a] == NULL) {
			while (a >= 0) {
				free(g[a]);
				a--;
			}
			free(g);
			return (NULL);
		}

		for (int d = 0; d < width; d++) {
			g[a][d] = 0;
		}
	}

	return (g);
}
