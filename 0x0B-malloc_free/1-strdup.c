#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 *returns pointer to a newly allocated space in memory, which contains a copy
 * @str: input string
 *
 * Return: a  pointer to  string. It returns NULL ifmemory was available
*/

char *_strdup(char *str)
{
	char *x;
	int size = 0;
	int copy = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[size] != '\0' ;)
	{
		size++;
	}

	x = malloc(size * sizeof(char) + 1);
	if (x == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; copy < size ; copy++)
		{
			x[copy] = str[copy];
		}
	}
	return (x);
}
