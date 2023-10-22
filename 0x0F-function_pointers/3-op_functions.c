#include "3-calc.h"


	int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);


/**
 * op_add - Adds two integers together
 * @a: The first integer to be added
 * @b: The second integer to be added
 *
 * This function takes two integers as parameters,
 * adds them together, and returns the result.
 *
 * Return: The sum of the two integers
 */
	int op_add(int a, int b)
	{
		return (a + b);
	}
/**
 * op_sub - short description
 * @a: first parameter
 * @b: second parameter
 *
 * Longer description
 * Return: what does the function return
 */
	int op_sub(int a, int b)
	{
		return (a - b);
	}
/**
 * op_mul - Returns the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The product of a and b.
*/

	int op_mul(int a, int b)
	{
		return (a * b);
	}

/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The quotient of a and b.
 */
	int op_div(int a, int b)
	{
		return (a / b);
	}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The remainder of the division of a by b.
 */
	int op_mod(int a, int b)
	{
		return (a % b);
	}
