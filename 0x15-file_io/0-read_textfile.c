#include "main.h"

/**
 * read_textfile - reads text file and prints letters
 * @filename: filename.
 * @letters: numbers of letters printed
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int i, j, k;
char *buffer;

buffer = malloc(sizeof(buffer) * letters);
if (buffer == NULL || filename == NULL)
return (0);

i = open(filename, O_RDONLY);
if (i == -1)
{
free(buffer);
return (0);
}

j = read(i, buffer, letters);
if (j == -1)
{
free(buffer);
close(i);
return (0);
}
k = write(STDOUT_FILENO, buffer, j);
if (k == -1)
{
free(buffer);
close(i);
return (0);
}
free(buffer);
close(i);
return (k);
}
