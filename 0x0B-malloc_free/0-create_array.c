#include "main.h"

/**
 * main - creates an array of chars with specific char
 * @size: size of array
 * @c: the stored char
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
  char *array;
  unsigned int index;
  if (size == 0)
    return (NULL);
  array = malloc(sizeof(char) * size);

  if (array == NULL)
    return (NULL);
  for(index = 0; index < size; index++)
    array[index] = c;

  return (array);
}
