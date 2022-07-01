#include "main.h"
#include <stdlib.h>

/**
 * _realloc - realloctes memory block
 * @ptr: pointer to memory
 * @old_size: size of allocated space of ptr.
 * @new_size: new size of new memory block
 * Return: if fails 'NULL', otherwise return pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *oldptr = ptr, *newp;
unsigned int i;

if (new_size == old_size)
return (oldptr);
if (oldptr == NULL)
{
newp = malloc(new_size);
return (newp);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
newp = malloc(new_size);
if (newp == NULL)
return (newp);
}
