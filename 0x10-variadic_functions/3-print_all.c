#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Prints all arguments passed to it
 * @format: The format to print the arguments
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list count;

	va_start(count, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(count, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(count, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(count, double));
					break;
				case 's':
					str = va_arg(count, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(count);
}
