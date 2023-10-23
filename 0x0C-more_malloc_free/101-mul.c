#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_number - a function that checks if a string is a number
 *
 * @str: A pointer to the string to check.
 *
 * Return: 1 if the string is a number, 0 otherwise.
 **/
int is_number(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * validate_input - a function that validates the input arguments
 *
 * @argc: The number of arguments.
 * @argv: The arguments.
 *
 * If the number of arguments is not 3 or if the arguments are not numbers,
 * it prints "Error" and exits with a status of 98.
 **/
void validate_input(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
}
/**
 * multiply_numbers - a function that multiplies two numbers
 *
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication.
 **/
int multiply_numbers(char *num1, char *num2)
{
	return (atoi(num1) * atoi(num2));
}
/**
 * print_result - a function that prints a number followed by a new line
 *
 * @result: The number to print.
 **/
void print_result(int result)
{
	printf("%d\n", result);
}
/**
 * main - the main function of the program
 *
 * @argc: The number of arguments.
 * @argv: The arguments.
 *
 * It validates the input arguments, multiplies the numbers
 * If the validation fails, it exits with a status of 98.
 *
 * Return: 0 if the program completes successfully.
 **/
int main(int argc, char *argv[])
{
	int result;

	validate_input(argc, argv);
	result = multiply_numbers(argv[1], argv[2]);
	print_result(result);
	return (0);
}
