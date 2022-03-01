#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - entry point.
 * @width: col
 * @height:row 
 * Return:  pointer to a bi dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int i, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	
	m = (int **) malloc(height * sizeof(int *));
	if (m == NULL)
	{
		free(m);
		return (0);
	}
	
	for (i = 0; i < height; i++)
	{
		m[i] = (int *) malloc(width * sizeof(int));
		if (m[i] == NULL)
		{
			for (; i >= 0; i--)
				free(m[i]);
			free(m);
			return (0);
		}
	}
	
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			m[x][y] = 0;
		}
	}
	return (m);
}
