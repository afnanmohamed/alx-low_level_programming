#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 *
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory block
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;

	if (nmemb == 0 || size == 0)
	return (NULL);

	x = malloc(nmemb * size);
	if (x == 0)
	return (NULL);

	memset(x, 0, nmemb * size);
	return (x);
}
