#include <stdio.h>

/**
 * main -  entry point.
 *
 * Description: a function  prints the number of arguments passed into it.
 * @argc: variable store number of command line
 * @argv: array of character
 *
 * Return: 0 in success.
 **/

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
