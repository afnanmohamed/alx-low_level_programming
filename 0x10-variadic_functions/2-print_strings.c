#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list count;
	unsigned int i;
	char *spare;

	va_start(count, n);

	for (i = 0; i < n ; i++)
	{
		spare = va_arg(count, char*);
		if (spare != NULL)
		{
			printf("%s", spare);
		}
		else
		{
			printf("(nil)");
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(count);

		printf("\n");

}
