#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: pointer of an unsigned long int
 * @index: index of bit
 * Return: 1 if it worked, -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index < 64)
{
*n = *n & ~(1 << index);
return (1);
}
return (-1);
}
