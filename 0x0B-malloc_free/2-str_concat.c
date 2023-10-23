#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 *
 * Description: a function returns concatenates two strings.
 * @s1: input string
 * @s2: input string
 *
 * Return: a pointer to a newly allocated space in memory or NULL in failure.
 **/

char *str_concat(char *s1, char *s2)
{
	char *x;
	int size1 = 0;
	int size2 = 0;
	int i = 0;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = strlen(s1);
	size2  = strlen(s2);

	x = malloc((size1 + size2 + 1) * sizeof(char));

	if (x == NULL)
		return (NULL);

	for (; i < size1 + size2 ; i++)
	{
		if (i < size1)
		{
			x[i] = s1[i];
		}
		else
		{
			x[i] = s2[i - size1];
		}
	}
	x[i] = '\0';

	return (x);
}
