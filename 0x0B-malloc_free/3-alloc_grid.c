#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid-return pointer to two dimensional array of integers
 * @width:the first array size
 * @height:the second array size
 * Return:int
 */
int **alloc_grid(int width, int height)
{
	int w = 0, h = 0, **arr;

	arr = malloc(sizeof(*arr) * height);
	if (width <= 0 || height <= 0 || arr == 0)
		return (NULL);
	for (; h < height; h++)
	{
		arr[h] = malloc(sizeof(**arr) * width);
		if (arr[h] == 0)
		{
			while (h--)
				free(arr[h]);
			free(arr);
			return (NULL);
		}
		for (; w < width; w++)
			arr[h][w] = 0;
	}
	return (arr);
}
