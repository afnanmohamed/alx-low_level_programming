#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a';

	char z = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x = (int) x + 1;
		x = (char) x;
	}

	while (z <= 'Z')
	{
		putchar(z);
		z = (int) z + 1;
		z = (char) z;
	}

	putchar('\n');
	return (0);
}
