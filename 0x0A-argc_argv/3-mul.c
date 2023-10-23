#include <stdio.h>
#include <stdlib.h>
/**
 * main -  entry point.
 *
 * Description: a function that multiplies two numbers.
 * @argc: variable store number of command line
 * @argv: array of character
 *
 * Return: 0 in success, 1 in Error..
 **/
int main(int argc, char *argv[])
{

	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);


	result = num1 * num2;


	printf("%d\n", result);

	return (0);
}
