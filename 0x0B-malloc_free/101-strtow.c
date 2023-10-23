#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_word - a function that counts the number of words in a string.
 * @s: the string to count the words in
 *
 * Return: the number of words in the string
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * create_word - a function that creates a word from a string.
 * @str: the string to create the word from
 * @start: the starting index in the string
 * @end: the ending index in the string
 *
 * Return: a pointer to the created word
 */
char *create_word(char *str, int start, int end)
{
	int c = end - start;
	char *tmp = (char *)malloc(sizeof(char) * (c + 1));

	if (tmp == NULL)
		return (NULL);
	while (start < end)
		*tmp++ = str[start++];
	*tmp = '\0';
	return (tmp - c);
}
/**
 * strtow - a function that splits a string into words.
 * @str: the string to split
 *
 * Return: a pointer to an array of words
 */

char **strtow(char *str)
{
	char **matrix;
	int i, k = 0, len = strlen(str), words, c = 0, start, end;

	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				matrix[k] = create_word(str, start, end);
				if (matrix[k] == NULL)
					return (NULL);
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
