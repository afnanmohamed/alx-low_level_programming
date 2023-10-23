#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: A pointer to the memory previously allocated with a call to malloc.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly allocated memory block.
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (ptr == NULL)
	return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	return (ptr);

	newptr = malloc(new_size);
	if (newptr == 0)
	return (NULL);

	if (new_size > old_size)
	memcpy(newptr, ptr, old_size);
	else
	memcpy(newptr, ptr, new_size);

	free(ptr);

	return (newptr);
}
