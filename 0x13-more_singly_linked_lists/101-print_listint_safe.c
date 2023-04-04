#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
* looped_listint_len - prototype
* @head: variable.
* Return: output.
* Otherwise - the number.
*/
size_t looped_listint_len(const listint_t *head)
{
const listint_t *tes, *rea;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);
tes = head->next;
rea = (head->next)->next;
while (rea)
{
if (tes == rea)
{
tes = head;
while (tes != rea)
{
nodes++;
tes = tes->next;
rea = rea->next;
}
tes = tes->next;
while (tes != rea)
{
nodes++;
tes = tes->next;
}
return (nodes);
}
tes = tes->next;
rea = (rea->next)->next;
}
return (0);
}

/**
* print_listint_safe - prototype.
* @head: variable.
* Return: output.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t des, dex = 0;

des = looped_listint_len(head);
if (des == 0)
{
for (; head != NULL; des++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (dex = 0; dex < des; dex++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (des);
}

