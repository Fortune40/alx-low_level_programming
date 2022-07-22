#include "main.h"

/**
 * set_bit - sets value of bit to 1 at given index.
 * @n: pointer of unsigned long int.
 * @index: index of bit.
 * Return: 1 if it worked, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index < 64)
{
*n += 1 << index;
return (1);
}
return (-1);
}
