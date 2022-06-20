#include "main.h"
/**
 * _memcpy - function that copies computer memory area.
 * @n: bytes filled
 * @src: memory area copied
 * @dest: memory destination to copy to
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
dest[a] = scr[a];
return (dest);
}
