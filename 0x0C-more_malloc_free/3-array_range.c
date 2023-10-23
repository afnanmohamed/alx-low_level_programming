#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * array_range - a function that creates an array of integers.
 *
 * @min: The minimum value of the array.
 * @max: The maximum value of the array.
 *
 * Return: A pointer to the allocated memory block for the array.
 **/

int *array_range(int min, int max)
{
	int size, *array, i = 0;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
	return (NULL);

	for (; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
