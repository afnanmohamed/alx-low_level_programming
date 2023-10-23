#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: numper if bytes to allocate
 *
 * Return: 98
 **/

void *malloc_checked(unsigned int b)
{
	void *x;


	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
