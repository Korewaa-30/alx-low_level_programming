#include <stdlib.h>

/**
 * free_grid - frees the two dimensional grid
 * @grid: ...
 * @height: ...
 *
 * Return: void
 */

void free_grid(int **grid, int height)

	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
