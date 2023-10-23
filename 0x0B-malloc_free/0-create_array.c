#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of characters
 *
 * Description: A function that creates an array of chars,
 *  and initializes it with a specific char.
 *
 * @size: size of the memory to print
 * @c: input parameter
 *
 * Return: a pointer to the array, or NULL if it fails
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}


	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}


	for (; i < size; i++)
	{
		array[i] = c;
	}

	return (array);

}
