#include "main.h"

/**
* append_text_to_file - Wadd something good at the end.
* @filename: input.
* @text_content: variable.
* Return: output.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int p, n, yad = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (yad = 0; text_content[yad];)
yad++;
}

p = open(filename, O_WRONLY | O_APPEND);
n = write(p, text_content, yad);

if (p == -1 || n == -1)
return (-1);

close(p);

return (1);
}
