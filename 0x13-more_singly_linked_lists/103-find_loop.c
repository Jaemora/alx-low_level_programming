#include "lists.h"

/**
* find_listint_loop - prototype
* @head: variable
* Return: output
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *snail = head;
listint_t *fury = head;

if (!head)
return (NULL);
while (snail && fury && fury->next)
{
fury = fury->next->next;
snail = snail->next;
if (fury == snail)
{
snail = head;
while (snail != fury)
{
snail = snail->next;
fury = fury->next;
}
return (fury);
}
}
return (NULL);
}
