#include "lists.h"

/**
* print_listint - prints all the elements of a linked list
*  linked list of type listint_t to print
* @h: linked list of type listint_t to print
* Return: number
*/
size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (z)
{
printf("%d\n", z->n);
num++;
z = z->next;
}

return (num);
}

