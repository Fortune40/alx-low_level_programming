#include "3-calc.h"

/**
 * op_add - function that sums 2 numbers.
 * @a: number1
 * @b: number2
 * Return: sum of both numbers.
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - function that subtractions two numbers.
 * @a: 1st number
 * @b: 2nd number
 * Return: subtractions of both numbers.
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - function that multiply two numbers.
 * @a: 1st number
 * @b: 2nd number
 * Return: multiply of both numbers.
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - function that divide two numbers.
 * @a: 1st number
 * @b: 2nd number
 * Return: division of both numbers.
 */
int op_div(int a, int b)
{
if (b <= 0 || b > a)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - function that find module between two numbers.
 * @a: 1st number
 * @b: 2nd number
 * Return: module of both numbers.
 */
int op_mod(int a, int b)
{
if (b <= 0 || b > a)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
