#include "main.h"

/**
* create_file - i dont know if im getting something wronh here.
* @filename: variable
* @text_content: input
* Return: output
*/
int create_file(const char *filename, char *text_content)
{
int m, n, yad = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (yad = 0; text_content[yad];)
yad++;
}

m = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
n = write(m, text_content, yad);

if (m == -1 || n == -1)
return (-1);

close(m);

return (1);
}

