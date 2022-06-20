#include "main.h"
/**
 * _memset - fills computer memory with constant byte.
 * @n: bytes filled
 * @b: contant byte
 * @s: memory area
 * Return: pointer to dest
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for(i = 0; i < n; i++)
*(s + i) = b;
return (s);
}
