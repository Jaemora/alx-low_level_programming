#include "lists.h"

/**
* free_listint_safe - prototype
* @h: variable
* Return: output
*/
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int def;
listint_t *tp;

if (!h || !*h)
return (0);
while (*h)
{
def = *h - (*h)->next;
if (def > 0)
{
tp = (*h)->next;
free(*h);
*h = tp;
len++;
}
else
{
free(*h);
*h = NULL;
len++;
break;
}
}

*h = NULL;

return (len);
}

