#include <stdio.h>

/**
 * main -  prints the number of arguments passed to it
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0 in success.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
