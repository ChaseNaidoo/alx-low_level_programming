#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers.
 *
 * @width: first dimensional array
 * @height: second dimensional array
 *
 * Return: pointer to 2D array, if fail, width or height <= 0 (NULL)
 *
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}

	arr = (int **) malloc(height * sizeof(int *));

	if (arr == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	arr[i] = (int *) malloc(width * sizeof(int));

	if (arr[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
		free(arr[j]);
		}
		free(arr);
		return (NULL);
		}
	}
	return (arr);
}

/**
 * free_grid - frees a 2D grid prpreviously created by the alloc_grid function.
 *
 * @grid: address of 2D grid
 * @height: height of grid from alloc_grid
 *
 * Return: (no return)
 *
 */
void free_grid(int **grid, int height);
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
