#include <stdlib.h>

/**
 * alloc_grid - Create a grid.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: grid pointer if successful, else return NULL
 */
int **alloc_grid(int width, int height) {
	int **g;
	int a, d;

	if (width <= 0 || height <= 0) {
		return (NULL);
	}

	g = (int **)malloc(height * sizeof(int *));
	if (g == NULL) {
		return (NULL);
	}

	for (a = 0; a < height; a++) {
		g[a] = (int *)malloc(width * sizeof(int));
		if (g[a] == NULL) {
			while (a >= 0) {
				free(g[a]);
				a--;
			}
			free(g);
			return (NULL);
		}

		for (d = 0; d < width; d++) {
			g[a][d] = 0;
		}
	}

	return (g);
}
