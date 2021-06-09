#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list
 * Return: The address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first_node, *second_node;

	if (head == NULL)
		return (0);

	first_node = head;
	second_node = head;

	do {
		first_node = first_node->next;
		if (first_node == NULL)
			return (NULL);
		first_node = first_node->next;
		if (first_node == NULL)
			return (NULL);
		second_node = second_node->next;
	} while (first_node != second_node);

	first_node = head;

	while (first_node == second_node)
	{
		second_node = second_node->next;
		first_node = first_node->next;
	}

	return (first_node);
}
