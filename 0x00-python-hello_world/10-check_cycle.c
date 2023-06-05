#include <stdlib.h>
#include "lists.h"
/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
listint_t *liam, *ron;
if (list == NULL || list->next == NULL)
return (0);
liam = list->next;
ron = list->next->next;
while (liam && ron && ron->next)
{
if (liam == ron)
return (1);
liam = liam->next;
ron = ron->next->next;
}
return (0);
}
