#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_buffer(char *file);
void end_file(int m);

/**
* make_buffer – Wadd is so frustrating oooooooooooooo.
* @file: variable
* Return: output
*/
char *make_buffer(char *file)

{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}

/**
* end_file – THIS IS ANNOYING.
* @m: why constrict us.
*/
void end_file(int m)
{
int j;

j = close(m);

if (j == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close m %d\n", m);
exit(100);
}
}

/**
 * main - Wadd the muster to kill.
 *
* @argc: argument.
* @argv: argument.
* Return: output.
* Description: what it does
*/
int main(int argc, char *argv[])
{
int gf, ot, u, n;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = make_buffer(argv[2]);
gf = open(argv[1], O_RDONLY);
u = read(gf, buffer, 1024);
ot = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (gf == -1 || u == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
n = write(ot, buffer, u);
if (ot == -1 || n == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
u = read(gf, buffer, 1024);
ot = open(argv[2], O_WRONLY | O_APPEND);
} while (u > 0);
free(buffer);
end_file(gf);
end_file(ot);

return (0);
}

