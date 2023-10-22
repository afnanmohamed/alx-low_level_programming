#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>



/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments
 *
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list countr;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(countr, n);

	for (; i < n ; i++)
	{
		sum += va_arg(countr, int);
	}
	va_end(countr);

	return (sum);

}
