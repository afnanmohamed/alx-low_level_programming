#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list ap;
    int *numbers;
    unsigned int i;
    int sum = 0;

    if (n == 0)
        return 0;

    numbers = malloc(n * sizeof(int));
    if (numbers == NULL)
        return 0;

    va_start(ap, n);

    for (i = 0; i < n; i++)
        numbers[i] = va_arg(ap, int);

    va_end(ap);

    for (i = 0; i < n; i++)
        sum += numbers[i];

    free(numbers);

    return sum;
}
