#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - check_cycle
 * @list: pointer to head of list
 * Return: int
 */
int check_cycle(listint_t *list)
{
	listint_t *tmp, *current;
	if (!list)
		return (0);
	tmp = list;
	current = tmp;
	while (1)
	{    
		if (current->next && current->next->next)
		{
			current = current->next->next;
			tmp = tmp->next;
		}
		if (!tmp->next || !current->next || !current->next->next)
			return (0);
		if (tmp == current->next->next)
			return (1);
	}
	return (0);
}
