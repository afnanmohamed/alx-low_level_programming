#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - a function that prints numbers, followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
* @...: A variable number of integers to be printed.
* Description: This function takes a variable number of integer arguments.
* After all numbers are printed, it prints a new line.
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int index;

va_start(nums, n);
    for (index = 0; index < n; index++)
        {
        printf("%d", va_arg(nums, int));

            if (index != (n - 1) && separator != NULL)
            printf("%s", separator);
int printf(const char *__restrict__ __format, ...)
            }

printf("\n");

va_end(nums);
}
