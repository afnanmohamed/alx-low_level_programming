#include <unistd.h>
#include<stdio.h>

/**
 * main - Entry point
 * DESCRIPTION: print without use printf or puts
 * Return: Always 1 (error)
*/

int main(void)
{
	char que[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, que, 59);
	return (1);
}
