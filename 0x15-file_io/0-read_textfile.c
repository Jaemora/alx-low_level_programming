#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- as its name.
 * @filename: input
 * @letters: variable
 * Return: output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *l;
ssize_t m;
ssize_t n;
ssize_t o;

m = open(filename, O_RDONLY);
if (m == -1)
return (0);
l = malloc(sizeof(char) * letters);
o = read(m, l, letters);
n = write(STDOUT_FILENO, l, o);

free(l);
close(m);
return (n);
}

